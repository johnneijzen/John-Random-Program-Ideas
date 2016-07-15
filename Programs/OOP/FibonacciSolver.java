/*
The MIT License (MIT)

Copyright (c) 2015-2016 John Neijzen

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

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
