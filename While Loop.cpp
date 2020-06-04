/*In this program we will be seeing about LOOPS in C++ Program*/

/*In C++ while, do while and for are different loop Statements , which is used to execute certain number of codes for certain number of times. That is the code inside the loop will be execute certain number of times till the condition fails and loop comes out of the scope.*/

/*In this Example lets see how WHILE LOOP works in a program.*/

/*While loop is kind of LOOP , which is used to execute the code for certain number of times, till the condition fails. While loop is also know as 'ENTERY CHECK LOOP',that is loop will be execute only is the condition is True, if the condition is fails then the loop stop executing.*/

/*When the condition becomes false, then the program control passes to the line which is next to the loop end.*/ 
 
/*Syntax of while loop

while(condition)

{

	Statement(S) / block of code ; //Any number of statements can present inside the loop 

	Increment;

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

int a = 1 ;

/*while loop*/

while ( a <= 10) /*While loop condition,Where condition will be checked.*/

{

	cout<<"\nValue of a = " << a << endl ;

	cout<<"\nThe WHILE LOOP is executed for " << a << endl ;

 	a++;  /*Increment the value of variable a */

} /*End of while loop */

/*when this line is printed it print a = 11 , since 11 times the while condition has been checked and only at 11th time the condition has failed and while loop comes out the scope*/

cout<<"\nThe WHILE LOOP is checked for "<< a << " number of times." << endl ;

}