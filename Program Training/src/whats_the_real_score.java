import java.io.*;

public class whats_the_real_score {

    public static void main(String[] args) {

        String filename = "p1.in";
        String line = null;
        String output = null;
        String answers = " ";

        try {
            FileReader fileReader = new FileReader(filename);

            BufferedReader bufferedReader = new BufferedReader(fileReader);

            while((line = bufferedReader.readLine()) != null) {
                if(answers.equals(" ")) {
                    answers = line;
                }
                else {
                    output = solution(line, answers);
                    System.out.println(output);
                }
            }

            bufferedReader.close();
        }
        catch(IOException e) {
            e.printStackTrace();
        }
    }

    private static String solution(String line, String answers) {


        String userAnswer = "";
        int score = 0, tScore = 0;

        int lenAnswer = answers.length();
        userAnswer = line.substring(line.length() - lenAnswer);

        tScore = lenAnswer * 2;

        char[] userAnswers = userAnswer.toCharArray();
        char[] ans = answers.toCharArray();

        for(int x = 0; x < lenAnswer; x++) {

            if(userAnswers[x] == ans[x]) {
                score+=2;
            }
            else if(userAnswers[x] == ' ') {
                score = score + 0;
            }
            else {
                score--;
            }
        }

        String letterGrade = "";
        double percentage = 0;
        percentage = ( (double) score / (double) tScore) * 100;
        System.out.println(percentage);
        if((percentage >= 90) && (percentage <= 100)) {
            letterGrade = "A";
        }
        else if((percentage >= 80) && (percentage <= 89.99)) {
            letterGrade = "B";
        }
        else if((percentage >= 70) && (percentage <= 70.99)) {
            letterGrade = "C";
        }
        else if((percentage >= 60) && (percentage <= 69.99)) {
            letterGrade = "D";
        }
        else if((percentage >= 0) && (percentage <= 59.99)) {
            letterGrade = "F";
        }

        String scoreStr = String.valueOf(score);

        return line + " " + scoreStr + " " + letterGrade;
    }
}
