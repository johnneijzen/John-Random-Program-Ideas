import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

/**
 * Created by STUDENT on 7/17/2017.
 */
public class a_very_simple_problem {

    public static void main(String[] args) {
        String filename = "p2.in";
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
                    output = solution(line);
                    System.out.println(output);
                }
            }

            bufferedReader.close();
        }
        catch(IOException e) {
            e.printStackTrace();
        }

    }

    static String solution(String input) {

        String output = "";
        int length = 0;
        length = input.length();

        if(length == 7) {
            output = input.substring(0, 1) + "," + input.substring(1, 4) + "," + input.substring(4, 7) + ".00";
        }
        else if(length == 6) {
            output = input.substring(0, 3) + "," + input.substring(2, 5) + ".00";
        }
        else if(length == 5) {
            output = input.substring(0, 2) + "," + input.substring(2, 5) + ".00";
        }
        else if(length == 4) {
            output = input.substring(0, 1) + "," + input.substring(1, 4) + ".00";
        }
        else {
            output = input.substring(0) + ".00";
        }


        return output;
    }
}
