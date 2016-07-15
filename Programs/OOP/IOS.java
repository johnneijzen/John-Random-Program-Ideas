import java.util.Scanner;

public class IOS {
	private int userInput;
	
	public IOS() {
		this.userInput = 0;
	}
	
	public IOS(int n) {
		this.userInput = n;
	}
	
	public void setUserInput() {
		Scanner scan = new Scanner(System.in);
		System.out.println("Enter Input");
		this.userInput = scan.nextInt();
		scan.close();
	}
	
	public void setUserInput(int n) {
		this.userInput = n;
	}
	
	public int getUserInput() {
		return this.userInput;
	}
	
	public void display(String text) {
		System.out.print(text);
	}
}