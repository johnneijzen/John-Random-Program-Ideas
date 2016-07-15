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

import java.util.Scanner;

public class IOS {
	private String userInput;
	
	public IOS() {
		this.userInput = "";
	}
	
	public IOS(String n) {
		this.userInput = n;
	}
	
	public IOS(int n) {
		this.userInput = Integer.toString(n);
	}
	
	public void setUserInput() {
		Scanner scan = new Scanner(System.in);
		System.out.println("Enter Input");
		this.userInput = scan.nextLine();
		scan.close();
	}
	
	public void setUserInput(String n) {
		this.userInput = n;
	}
	
	public void setUserInput(int n) {
		this.userInput = Integer.toString(n);
	}
	
	public String getUserInput() {
		return this.userInput;
	}
	
	public void display(String text) {
		System.out.print(text);
	}
}
