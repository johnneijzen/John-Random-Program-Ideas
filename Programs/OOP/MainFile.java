
public class MainFile {

	public static void main(String[] args) {
		IOS a = new IOS();
		FibonacciSolver b = new FibonacciSolver();
		
		a.setUserInput();
		b.SetN(a.getUserInput());
		b.solver();
		a.display(b.returnSeries());
	}

}
