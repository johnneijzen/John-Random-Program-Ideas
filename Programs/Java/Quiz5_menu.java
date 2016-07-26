import java.util.Scanner;

public class Quiz5_menu {

	public static char[] Hexarray = new char[100];	
	
	public static void main(String[] args) {
		menu();
	}
	
	public static void menu() {
		int menuChoice = 0;
		Scanner in = new Scanner(System.in);
		while(true) {      // loop forever
		     // display menu
			 printMenu();
		     menuChoice = in.nextInt();

		     if(menuChoice == 1) {
		       lab1();
		     }
		     else if(menuChoice == 2) {
		       lab2();
		     }
		     else if(menuChoice == 3) {
		       System.out.println("Goodbye");
		       break;    
		     }
		     else {
		       System.out.println("Invalid choice");
		     }
		  }  
	}
	
	public static void printMenu() {
		System.out.println("\nWelcome to Quiz 5");
		System.out.println("Made by John V. Neijzen and Isaiah C. Galorport");
		System.out.println("Type 1 for lab 1 and type 2 for lab 2 and 3 to quit");
	}
	
	public static void lab2() {
		int number = 0;
		String base;
		Scanner scan = new Scanner(System.in);
		Scanner scan1 = new Scanner(System.in);
		
		System.out.println("Made by John V. Neijzen and Isaiah C. Galorport");
		System.out.println("Enter number: ");
		number = scan.nextInt();
		System.out.println("choose Base to covert with");
		System.out.println("Examples: base 3 = ternary, base 4 - quaternary, base 5 = quinary");
		System.out.println("base 6 = senary, base 7 = septenary, base 12 = duodecimal");
		System.out.println("Type the name: ");
		base = scan1.nextLine();
		
		switch(base){
			case "ternary":
				System.out.println("The ternary equivalent of " + number + " is " + convert(number,3));
				break;
			case "quaternary":
				System.out.println("The quaternary equivalent of " + number + " is " + convert(number,4));
				break;
			case "quinary":
				System.out.println("The quinary equivalent of " + number + " is " + convert(number,5));
				break;
			case "senary":
				System.out.println("The senary equivalent of " + number + " is " + convert(number,6));
				break;
			case "septenary":
				System.out.println("The septenary equivalent of " + number + " is " + convert(number,7));
				break;
			case "duodecimal":
				String duodecimal = Integer.toString(number, 12);
				System.out.println("The septenary equivalent of " + number + " is " + duodecimal);
				break;
		}
	}
	
	public static void lab1() {
		int count;
    	int userInput = 0;
    	int hexadecimalCount = 0;
    	
    	Scanner scan3 = new Scanner(System.in);
    	
    	System.out.println("My name: John Neijzen and Isaiah Galorport");
    	System.out.println("\nEnter Number: ");
    	userInput = scan3.nextInt();
    	
    	System.out.println("\naccepts input in decimal: " + userInput);
    	System.out.println("\nconverts input to binary: " +  decimalToBinary(userInput));
    	System.out.println("\nconverts input to octal: " + decimalToOctal(userInput));
    	hexadecimalCount = decimalToHexadecimal(userInput);
    	System.out.print("\nconverts input to hexadecimal: " );
    	for(count = hexadecimalCount -1; count > 0 ; count--)
    	{
    		System.out.print(Hexarray[count]);
    	}
	}
	
	public static long decimalToBinary(int input){
    	long decimal = input;
    	long remainder = 0;
    	long binary = 0;
    	long count = 1;
    	
    	while(decimal != 0)
    	{
    		remainder = decimal%2;
    		decimal = decimal / 2;
    		binary = binary + (remainder*count);
    		count = count*10;
    	}
    	
    	return binary;
    }

    public static int decimalToOctal(int input){
    	int decimal = input;
    	int remainder;
    	int octal = 0;
    	int count =1;
    	
    	while(decimal != 0)
    	{
    		remainder = decimal % 8;
    		decimal = decimal / 8;
    		octal = octal + (remainder*count);
    		count = count*10;
    	}
    	
    	return octal;
    }

    public static int decimalToHexadecimal(int input){
    	int decimal = input;
    	int remainder;
    	int count = 1;
    	char ch;
    	
    	while(decimal != 0)
    	{
    		remainder = decimal % 16;
    		if(remainder <10)
    			remainder = remainder + 48;
    		else
    			remainder = remainder + 55;
    		ch = (char) remainder;
    		Hexarray[count] = ch;
    		decimal = decimal / 16;
    		count++;
    	}
    	return count;
    }
    
    public static int convert(int value, int base)
	{
		int num = value;
		int rem = 0;
		int count = 1;
		int covertBase = 0;
		while(num != 0)
    	{
    		rem = num % base;
    		num = num / base;
    		covertBase = covertBase + (rem*count);
    		count = count*10;
    	}
		return covertBase;
	}
	
}
