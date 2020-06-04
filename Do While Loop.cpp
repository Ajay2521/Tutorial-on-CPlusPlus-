/*In this program we will be seeing about LOOPS in C++ Program*/

/*In C++ while, do while and for are different loop Statements , which is used to execute certain number of codes for certain number of times. That is the code inside the loop will be execute certain number of times till the condition fails and loop comes out of the scope.*/

/*In this Example lets see how DO WHILE LOOP works in a program.*/

/*Do While loop is kind of LOOP , which is used to execute the code for certain number of times, till the condition fails. Do While loop is also know as 'EXIT CHECK LOOP',that is loop will execute atleast once even though the condition fails.*/
 
/*When the condition becomes false, then the program control passes to the line which is next to the loop end.*/ 

/*Syntax of do while loop

do

{

	Statement(S) / block of code;//Any number of statements can present inside the loop 

	Increment;

}while(condition)

*/

/*including preprocessor / header file in the program*/

#include <iostream>

/*using namespace*/

using namespace std ;

/*creating a main() function of the program*/

int main()

{

/* local variable definition */

int a = 0 ;

/*Do while loop*/

do

{

	cout<<"\nValue of a = " << a << endl ;

	cout<<"\nThe DO WHILE LOOP is executed for " << a << endl ;

 	a++;  /*Increment the value of variable a */

}while ( a < 0 ) ; /*End of while loop */ 

/*do While loop condition,Where condition will be checked.*/ 

/*when this line is printed it print a = 1 , since 1 time the do while condition has been checked and only at 1th time the condition has failed and for loop comes out the scope*/

cout<<"\nThe DO WHILE LOOP is checked for "<< a << " number of times." << endl ;

}