import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.Scanner;

/**
 * Created by STUDENT on 7/17/2017.
 */
public class only_in_pnas {

    public static void main(String[] args) {
        String filename = "p3.in";
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

    private static String solution(String line) {
        int amount = 0;
        int tenPeso = 0;
        int fivePeso = 0;
        int onePeso = 0;
        int centavo = 0;
        String[] splittedBySpace = line.split(" ");

        amount = Integer.parseInt(splittedBySpace[0]);
        tenPeso = Integer.parseInt(splittedBySpace[1]);
        fivePeso = Integer.parseInt(splittedBySpace[2]);
        onePeso = Integer.parseInt(splittedBySpace[3]);
        centavo = Integer.parseInt(splittedBySpace[4]);

        while(amount >= 10){
            if(tenPeso != 0){
                tenPeso--;
                amount -= 10;
            } else {
                break;
            }
        }
        while(amount >= 5){
            if(fivePeso != 0) {
                fivePeso--;
                amount -= 5;
            } else {
                break;
            }
        }
        while(amount >= 1){
            if(onePeso != 0){
                onePeso--;
                amount--;
            } else {
                break;
            }
        }
        while(amount >= 1){
            if(centavo >= 4){
                amount--;
                centavo -= 4;
            } else {
                break;
            }
        }
        String output = "";

        if(amount > 0){
            output = String.valueOf(amount);
        } else  {
            output = "none";
        }

        return output;
    }
}
