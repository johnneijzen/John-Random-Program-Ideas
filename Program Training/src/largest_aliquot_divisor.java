import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

/**
 * Created by STUDEBTS on 7/19/2017.
 */
public class largest_aliquot_divisor {
    public static void main(String[] args) {
        String filename = "p4.in";
        String line = null;
        String output = null;

        try {
            FileReader fileReader = new FileReader(filename);

            BufferedReader bufferedReader = new BufferedReader(fileReader);

            while((line = bufferedReader.readLine()) != null) {;
                    System.out.println(solution(line));
            }

            bufferedReader.close();
        }
        catch(IOException e) {
            e.printStackTrace();
        }

    }

    private static int solution(String line) {
        int N = Integer.valueOf(line);
        int largest = 1;

        if (N == 1) {
            return N;
        }

        for (int i = 2; i < N; i++) {
            if (N % i == 0) {
                largest = i;
            }
        }

        return largest;
    }
}
