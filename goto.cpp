/*In this program we will be seeing about LOOPS CONTROL STATEMENTS in C++ Program*/

/*In C++ break , continue and goto are called as LOOP CONTROL STATEMENT, which is been used for contoling the flow of loop in a c++ program.*/

/*In this Example lets see how GOTO works in a program.*/

/*goto is a type of loop control statement which is used for unconditional jump from the goto statement to the lable / destination statement in the same function.*/

/*Note : using goto in c program isd highly not encouraged , thus just learn how it works in a program*/
 
/*Syntax of goto

goto label;

..

.

label : statement;

*/

/*including preprocessor / header file in the program*/

#include <iostream>

/*using namespace*/

using namespace std ;

/*creating a main() function of the program*/

int main()

{

/*Note : This program will be resulting in infinite loop. PRESS CTRL + C to stop executing infinite Loop*/

GOTO : for ( int i = 1 ; i <= 10 ; i++)

{

	if ( i == 7)

	{
		
		cout<<"\ngoto has been  applied . Thus the loop has been jumped to the lable GOTO statement." << endl ;

		goto GOTO;

	}		

	cout<<"\nValue of i = " << i << endl ;

}

cout<<"\ngoto Statement has executed SUCCESSFULLY....." << endl ;

}