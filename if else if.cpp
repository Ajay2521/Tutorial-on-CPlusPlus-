/*In this program we will be seeing Decision Making Statements*/

/*In C++ if, if else, if else if, nested if , switch and nested Switch are know as Decision Making Statements , which is used to make decision based upon the condition , and the statement is executed based on the boolean condition.*/

/*In this Example lets see how If Else If Statement works in a program*/

/*Syntax of if else if statement

if(boolean_expression 1)

{

	// Statement(s) inside this block will be executes when the boolean expression 1 is true

	statement 1;

	statement 2;

	.
	.
	.

	statement n;

}

else if(boolean_expression 2)

{

	// Statement(s) inside this block will be executes when the boolean expression 2 is true

	statement 1;

	statement 2;

	.
	.
	.

	statement n;

}

else if(boolean_expression 3)

{

	// Statement(s) inside this block will be executes when the boolean expression 3 is true

	statement 1;

	statement 2;

	.
	.
	.

	statement n;

}


.
.
.
.

else if(boolean_expression n)

{


	// Statement(s) inside this block will be executes when the boolean expression n is true

	statement 1;

	statement 2;

	.
	.
	.

	statement n;

}


else

{

	// Statement(s) inside this block will be executes when the non of the boolean expression is true

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

int a = 15 ;

/* check the boolean condition using if statement */

/*If the Boolean expression evaluates to true, then the if block will be executed,
else then else if  block will be executed,Otherwise else will be Executed*/

/*Note : you can able to have any number of else if condition*/

/*In this 'a' is decleared as 15 , therefore when the condition is true then that particular if else block will be executed and remainings are ignored by the complier*/

if( a == 0 )

{

	cout<<"\n\"a\" is ZERO." << endl ;

	cout<<"\nIF STATEMENT IS EXECUTED..." << endl ;

}

else if( a == 5 )

{

	cout<<"\n\"a\" is FIVE." << endl ;

	cout<<"\nFIRST ELSE IF STATEMENT IS EXECUTED..." << endl ;

}

else if( a == 10 )

{

	cout<<"\n\"a\" is TEN." << endl ;

	cout<<"\nSECOND ELSE IF STATEMENT IS EXECUTED..." << endl ;

}

else if( a == 15 )

{

	cout<<"\n\"a\" is FIFTEEN." << endl ;

	cout<<"\nTHRID ELSE IF STATEMENT IS EXECUTED..." << endl ;

}

else if( a == 20 )

{

	cout<<"\n\"a\" is TWENTY." << endl ;

	cout<<"\nFOURTH ELSE IF STATEMENT IS EXECUTED..." << endl ;

}

else

{

	cout<<"\n\"a\" is MORE THAN TWENTY." << endl ;

	cout<<"\nELSE STATEMENT IS EXECUTED..." << endl ;

}

cout<<"\nValue of \"a\" is : " << a << endl ;

}