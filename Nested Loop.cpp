/*In this program we will be seeing about LOOPS in C++ Program*/

/*In C++ while, do while and for are different loop Statements , which is used to execute certain number of codes for certain number of times. That is the code inside the loop will be execute certain number of times till the condition fails and loop comes out of the scope.*/

/*In this Example lets see how NESTED LOOP works in a program.*/

/*Nested loops is similar to loop concept but where in this nested loop . loop can be nested inside another loop.*/
 
/*Syntax of nested for loop

for ( init ; condition ; increment )

{

	for ( init ; condition ; increment )

	{

		Statement(S) / block of code; //Any number of statements can present inside the loop 

	}

	Statement(S) / block of code; //Any number of statements can present inside the loop 

}

*/

/*Syntax of nested While loop

while ( condition )

{

	while ( condition )

	{

		Statement(S) / block of code; //Any number of statements can present inside the loop 

	}

	Statement(S) / block of code; //Any number of statements can present inside the loop 

}

*/

/*Syntax of nested do While loop

do

{

	Statement(S) / block of code; //Any number of statements can present inside the loop 
	
	do

	{

		Statement(S) / block of code; //Any number of statements can present inside the loop 

	}while ( condition );

}while ( condition );

*/

/*including preprocessor / header file in the program*/

#include <iostream>

/*using namespace*/

using namespace std ;

/*creating a main() function of the program*/

int main()

{

for ( int i = 1 ; i <= 5 ; i++)

{

cout<<"\nOUTER FOR LOOP is executed for " << i << endl ;

	for ( int j = 1 ; j <= 3 ; j++)

	{

	cout<<"\nINNER FOR LOOP is executed for " << j << endl ;

	}

}
  
}