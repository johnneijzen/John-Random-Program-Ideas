solve(N,M) :-
    ( even(N) ->  
    	N1 is N div 2,
    	write("Double - Amount: "),
    	writeln(N1)
    ;
    	N1 is N - 1,
    	write("Add - Amount: "),
    	writeln(N1)
    ),
    M1 is M + 1,
    ( N1 == 1 ->
    	write("Total Moves: "),
    	writeln(M1)
    ;
    	solve(N1,M1)
    ).

even(N) :-
     0 is N mod 2.

/** <License>
	The MIT License (MIT)

	Copyright (c) 2016 John Neijzen

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


/** <Info>
	Made By John V. Neijzen CSB 22.1
	Version: 1.0
    
	Info:
	Sorry i did not make user friendly since i cant really write much using prolog. 
    also i hate prolog since it has no dyamic memory so you have to declare variable for
    each operation.
    
    also 
    since array are really hard to make make in prolog solution is written from buttom to top
    unlike my c and java version and also since rule i cant write statement that will display
    200 on top on solution.
   	
*/

/** <examples>

?- solve(200,0)
?- solve(amount,0)

*/
