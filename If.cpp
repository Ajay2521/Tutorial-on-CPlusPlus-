/*In this program we will be seeing Decision Making Statements*/

/*In C++ if, if else, if else if , nested if , switch and nested Switch are know as Decision Making Statements , which is used to make decision based up on the condition , and the statement is being executed*/

/*In this Example lets see how SIMPLE IF Statement works in a program*/

/*Syntax of Simple If statement

if(boolean_expression)

{

	statement 1;

	statement 2;

	.
	.	
	.

	statement n;

}

*/

/*including preprocessor / header file in the program*/

#include <iostream>

/*using namespace*/

using namespace std ;

/*creating a main() function of the program*/

int main()

{

/* local variable definition */

int a = 10;

/* check the boolean condition using if statement */

/*In this if the  "if" condition is True then the statements/code inside will be Executed  else no action will be performed.*/

if( a > 20 )

{

	/* if condition is true then print the following */

	cout<<"\n\"a\" is Greater than 20." << endl ;

	cout<<"\nValue of \"a\" is : " << a << endl ;

}

/* check the boolean condition using if statement */

/*In this if the  "if" condition is True then the statements/code inside will be Executed  else no action will be performed.*/

if( a < 20 )

{

	/* if condition is true then print the following */

	cout<<"\n\"a\" is less than 20." << endl ;

	cout<<"\nValue of \"a\" is : " << a << endl  ;

}

}