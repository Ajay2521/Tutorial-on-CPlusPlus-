/*In this program we will be seeing about LOOPS in C++ Program*/

/*In C++ while, do while and  for are different loop Statements , which is used to execute certain number of codes for certain number of times. That is the code inside the loop will be execute certain number of times till the condition fails and loop comes out of the scope.*/

/*In this Example lets see how FOR LOOP works in a program.*/

/*for loop is kind of LOOP , which is used to execute the code for certain number of times, till the condition fails. for loop is also know as "predefined loops" , which is the user might know how many times will the loop being executed.that is loop will be execute only when the condition is True, if the condition is fails then the loop stop executing.*/

/*When the condition becomes false, then the program control passes to the line which is next to the loop end.*/ 
 
/*Syntax of for loop

for ( init ; condition ; increment )

{

	Statement(S) / block of code; //Any number of statements can present inside the loop 

}

*/

/*In for loop the initiation, condition and incrementation will be occcured as same line */

/*including preprocessor / header file in the program*/

#include <iostream>

/*using namespace*/

using namespace std ;

/*creating a main() function of the program*/

int main()

{

int a ;

for ( a = 1 ; a <= 10 ; a++ ) 

 /*for loop initalization is used to initalize the loop varaiable which is to be executed,  for loop is condition,Where condition will be checked, Increment is used to increment the value of the variable.*/

{

	cout<<"\nValue of a = " << a << endl ;

	cout<<"\nThe FOR LOOP is executed for " << a << endl ;

} /*End of for loop */

/*when this line is printed it print a = 11 , since 11 times the for condition has been checked and only at 11th time the condition has failed and for loop comes out the scope*/

cout<<"\nThe FOR LOOP is checked for "<< a << " number of times." << endl ;

}