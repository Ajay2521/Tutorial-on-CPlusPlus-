/*In this lets see about EXCEPTION in C++ Program.*/

/*When a program arises during the execution of a program is called as Exception.*/

/*Exception in C++ provides a way of transfer control from one part of a program to another part. */

/*Exception handling in C++ is done by using three keywords . They are

1) try = It is a block which is used to identifies a block of code for which particular exception will be activated . It is followed by one or more catch blocks .

2) catch = It is used to catche an exception with an exceprtion handler at the place where we  want to handle the problem .

3) throw = It throws up an exception when a problem shows up in the program .

*/

/*syntax for try and catch is 
 
try{

	//Code which is protected from exception.

}catch ( ExceptionName e1 ){

	//catch block 

}catch ( ExceptionName e2 ){

	//catch block 

}

.
.
.
catch ( ExceptionName eN ){

	//catch block 

}

*/

/*NOTE : Multiple "catch block" can be defined for multiple errors for a single try block . */

/*NOTE : throw can be done at anywhere inside a code using "throw " keyword . */

/*syntax for throw is

DataType FunctionName (  ) 

{

	//condition statement

	throw "//error message which is to be displayed." ;

}

*/

/*including preprocessor / headerfile  in the program*/

#include <iostream>

#include <string>

/*using namespace*/

using namespace std ;

/*defining a function division ( ) which is used to divide  a number by another number, and throws an error if the number is divided by Zero . */
 
float division ( int a , int b )

{

	if ( b == 0 )

	{

		throw "\nA Number Division by ZERO Condition is not possible...!!! " ;

	}

	return ( a / b ) ;

}

/*Main( ) function of the program.*/

int main( )

{

int a = 20 ;

int b = 10 ;

float Result = 0 ;

try {

	Result = division ( a , b );

	cout << "\nThe division value of " << a << " from " << b << " is = " << Result << endl ;

} catch ( const char* msg ) {

	cerr << msg << endl ;
}

/*redefing the value of b. */

b = 0 ;

try {

	Result = division ( a , b );

	cout << "\nThe division value of " << a << " from " << b << " is = " << Result << endl ;

} catch ( const char* msg ) {

	cerr << msg << endl ;
}

}    