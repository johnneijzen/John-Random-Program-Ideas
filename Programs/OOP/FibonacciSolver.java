
public class FibonacciSolver {
	private int N;
	private String FiboSeries;
	
	public FibonacciSolver() {
		this.N = 0;
		this.FiboSeries = "";
	}
	
	public FibonacciSolver(int n) {
		this.N = n;
		this.FiboSeries = "";
	}
	
	public void SetN(int n) {
		this.N = n;
	}
	
	public void solver() {
		int ctr;
		int firstNum = 0;
		int secondNum = 1;
		int nextNum = 0;
		FiboSeries = "Fibonacci Series is: ";
		
		for(ctr = 0; ctr < N; ctr++){
			FiboSeries = FiboSeries + " " + nextNum;
			firstNum = firstNum + secondNum;
			secondNum = nextNum;
			nextNum = firstNum;
		}
	}
	
	public String returnSeries(){
		return this.FiboSeries;
	}
	
}
