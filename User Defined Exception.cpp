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

/*Here we see about the standard exceptions which is defined in a standard c++ library in a name <exception> , this standard exception is arranged in a parent -  child relationship.*/

/*In this user defined Exception in c++ has explained . */

/*including preprocessor / headerfile  in the program*/

#include <iostream>

#include <exception>

/*using namespace*/

using namespace std ;

/*defining a user defined exception using structure*/

struct MyException : public exception

{

	const char * ErrorMsg ( ) const throw ( )

	{
	
	return "\nUser Defined C++ Exception...\n\nHas been Executed SUCCESSFULLY...." ;

	}

};

/*Main( ) function of the program.*/

int main( )

{

try

{

	throw MyException();

}catch(MyException& e){

	std::cout << "\nMyException caughted..." << std::endl;

	std::cout << e.ErrorMsg( ) << std::endl;

}

}    