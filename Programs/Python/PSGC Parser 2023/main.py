import csv

# Define the input and output file paths
input_file = 'input.csv'
province_file = 'provinces.csv'
city_mun_file = 'cities_municipalities.csv'
barangay_file = 'barangays.csv'

# Open the input CSV file
with open(input_file, 'r', encoding='utf-8-sig') as file:
    reader = csv.DictReader(file)
    province_rows = []
    city_mun_rows = []
    barangay_rows = []

    # Iterate over each row in the CSV file
    for row in reader:
        psgc = row['10-digit PSGC']
        geographic_level = row['Geographic Level']

        if geographic_level == 'Prov':
            province_rows.append(row)
        elif geographic_level == 'City' or geographic_level == 'Mun':
            # Extract the region, province, and city/municipal codes
            region_code = psgc[:2]
            province_code = psgc[2:5]
            city_mun_code = psgc[5:7]

            # Pad the city/municipal code with zeros
            city_mun_code = city_mun_code.ljust(2, '0')

            # Create the modified PSGC with the added province code
            modified_psgc = region_code + province_code + city_mun_code + psgc[7:]

            # Update the row with the modified PSGC
            row['10-digit PSGC'] = modified_psgc
            city_mun_rows.append(row)
        elif geographic_level == 'Bgy':
            # Extract the region, province, and city/municipal codes
            region_code = psgc[:2]
            province_code = psgc[2:5]
            city_mun_code = psgc[5:7]

            # Pad the city/municipal code with zeros
            city_mun_code = city_mun_code.ljust(2, '0')

            # Create the modified PSGC with the added city/municipal code
            modified_psgc = region_code + province_code + city_mun_code + psgc[7:]

            # Add the city_or_municipal_code field to the row
            row['city_or_municipal_code'] = modified_psgc

            # Append the row to the barangay rows
            barangay_rows.append(row)

# Write the rows to their respective output files
with open(province_file, 'w', newline='') as file:
    writer = csv.DictWriter(file, fieldnames=reader.fieldnames)
    writer.writeheader()
    writer.writerows(province_rows)

with open(city_mun_file, 'w', newline='') as file:
    writer = csv.DictWriter(file, fieldnames=reader.fieldnames)
    writer.writeheader()
    writer.writerows(city_mun_rows)

with open(barangay_file, 'w', newline='') as file:
    # Add the 'city_or_municipal_code' field to the fieldnames
    fieldnames = reader.fieldnames + ['city_or_municipal_code']
    writer = csv.DictWriter(file, fieldnames=fieldnames)
    writer.writeheader()
    writer.writerows(barangay_rows)

print("Files created successfully!")
