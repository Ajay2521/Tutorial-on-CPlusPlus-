/*In this program we will be seeing Decision Making Statements*/

/*In C++ if, if else, if else if, nested if , switch and nested Switch are know as Decision Making Statements , which is used to make decision based up on the condition ,and the statement is executed based on the boolean condition.*/

/*In this Example lets see how NESTED IF Statement works in a program*/

/*It is always legal in C programming to nest if-else statements, which means you
can use one if or else if statement inside another if or else if statement(s).*/

/*You can nest else if...else in the similar way as you have nested if statements.*/

/*You can nest  if...else in the similar way as you have nested if statements.*/

/*Syntax of NESTED IF statement

if(boolean_expression1)

{

	//statement(s) will be executed only if boolean condition 1 is true.

	statement 1;

	statement 2;

	.
	.
	.

	statement n;

	if(boolean_expression2)

	{

		//statement(s) will be executed only if boolean condition 2 is true.

		statement 1;

		statement 2;

		.
		.
		.

		statement n;

	}

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

int a = 5;

int  b = 10;

/* check the boolean condition using if statement */

/*In this if the "IF" condition is True then the statements/code inside if block will be Executed.*/

if( a  > 10 )

{

	/* if condition is true then print the following */

	cout<<"\n\"a\" is GREATER THAN  10." << endl ;
	
	cout<<"\n\"a\" is in OUTTER IF STATEMENT...." << endl ;

	if( b == 10 )

	{

		/* if condition is true then print the following */

		cout<<"\n\"b\" is EQUAL TO 10." << endl ;

		cout<<"\n\"b\" is in INNER IF STATEMENT...." << endl ;

	}

cout<<"\nValue of \"a\" is : " << a << endl ;

cout<<"\nValue of \"b\" is : " << b << endl ;

}

/* check the boolean condition using if statement */

/*In this if the "IF" condition is True then the statements/code inside if block will be Execcted.*/

if( a  < 10 )

{

	/* if condition is true then print the following */

	cout<<"\n\"a\" is LESSER THAN  10." << endl ;
	
	cout<<"\n\"a\" is in OUTTER IF STATEMENT...." << endl ;

	if( b == 10 )

	{

		/* if condition is true then print the following */

		cout<<"\n\"b\" is EQUAL TO 10." << endl ;

		cout<<"\n\"b\" is in INNER IF STATEMENT...." << endl ;

	}

cout<<"\nValue of \"a\" is : " << a << endl ;

cout<<"\nValue of \"b\" is : " << b << endl ;

}

}