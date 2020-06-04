/*In this program we will be seeing about LOOPS CONTROL STATEMENTS in C++ Program*/

/*In C++ break , continue and goto are called as LOOP CONTROL STATEMENT, which is been used for controling the flow of loop in a c++ program.*/

/*In this Example lets see how break works in a program.*/

/*break is a type of loop control statement which is used to terminate a loop, and execute remaining part of a programming statement after loop .*/
 
/*Syntax of break

break;

*/

/*including preprocessor / header file in the program*/

#include <iostream>

/*using namespace*/

using namespace std ;

/*creating a main() function of the program*/

int main()

{

for ( int i = 1 ; i <= 10 ; i++)

{

	cout<<"\nValue of i = " << i << endl ;

	if ( i == 7)

	{

		cout<<"\nBreak has been  applied . Thus the loop is terminated when i becomes 7 " << endl ;

		break ;

	}		

}

cout<<"\nBreak Statement has executed SUCCESSFULLY....." << endl ;

}