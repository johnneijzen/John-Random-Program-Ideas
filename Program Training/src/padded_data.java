import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

/**
 * Created by STUDEBTS on 7/19/2017.
 */
public class padded_data {

    public static void main(String[] args) {
        String filename = "p5.in";
        String line = null;
        String output = null;
        int c = 0;

        try {
            FileReader fileReader = new FileReader(filename);

            BufferedReader bufferedReader = new BufferedReader(fileReader);

            while((line = bufferedReader.readLine()) != null) {
                if(c == 0) {
                    c = Integer.parseInt(line);
                }
                else {
                    output = solution(line, c);
                    System.out.println(output);
                }
            }

            bufferedReader.close();
        }
        catch(IOException e) {
            e.printStackTrace();
        }

    }

    private static String solution(String line, int c) {
        String data = "";
        String character = "";
        int lenght = 0;
        String direction = "";

        String[] splittedBySpace = line.split(" ");

        data = splittedBySpace[0];
        character = splittedBySpace[1];
        lenght = Integer.parseInt(splittedBySpace[2]);
        direction = splittedBySpace[3];

        while (data.length() < lenght) {
            if(direction.equals("L")) {
                data = character + data;
            } else {
                data = data + character;
            }
        }
        return data;
    }
}
