/*In this program we will be seeing Decision Making Statements*/

/*In C++ if, if else, if else if, nested if , switch , nested Switch are know as Decision Making Statements , which is used to make decision based up on the condition , and the statement is executed based upon the decision condition.*/

/*In this Example lets see how If Else Statement works in a program*/

/*Syntax of If else statement

if(boolean_expression)

{

	//statements execute only if the condition is True

	statement 1;

	statement 2;

	.
	.
	.

	statement n;

}

else

{

	//statements execute only if the condition is Flase

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

int a = 5 ;

cout<<"\nWhen \"a\" is equal to 5." << endl ;

/* check the boolean condition using if statement */

/*If the Boolean expression evaluates to true, then the if block will be executed,
otherwise, the else block will be executed.*/

/*In this the condition which is given is False .Since "a" is less than 10 but the condition given here is "a" is greater than 10 .Therefore the condition fails and else , Else statement will be Executed .*/

if( a > 10 )

{

	cout<<"\n\"a\" is GREATER THAN 10. " << endl ;

	cout<<"\nIF STATEMENT IS EXECUTED.... " << endl ;

	cout<<"\nValue of \"a\" is : " << a << endl ;

}

else

{

	cout<<"\n\"a\" is LESSER THAN 10." << endl ;

	cout<<"\nELSE STATEMENT IS EXECUTED..." << endl ;

	cout<<"\nValue of \"a\" is : " << a << endl ;

}

/*Redifinied  local variable  a from 5 to 15 */

a = 15;

cout<<"\nWhen \"a\" is equal to 15." << endl ;

/* check the boolean condition using if statement */

/*If the Boolean expression evaluates to true, then the if block will be executed,
otherwise, the else block will be executed.*/

/*In this the condition which is given is True ,Since "a" is Greater than 10, and the condition is "a" is greater than 10 .Therefore the condition is True and else , If statement will be Executed .*/

if( a > 10 )

{

	cout<<"\n\"a\" is GREATER THAN 10. " << endl ;

	cout<<"\nIF STATEMENT IS EXECUTED.... " << endl ;

	cout<<"\nValue of \"a\" is : " << a << endl ;

}

else

{

	cout<<"\n\"a\" is LESSER THAN 10." << endl ;

	cout<<"\nELSE STATEMENT IS EXECUTED..." << endl ;

	cout<<"\nValue of \"a\" is : " << a << endl ;

}

}