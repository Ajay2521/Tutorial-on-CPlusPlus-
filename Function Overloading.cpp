/*In this lets see the concept of OVERLOADING in C++ Program.*/

/*The process of define a more than one specification for a function which have same function name or operation is called FUNCTION OVERLOADING or OPERATOR OVERLOADING.*/

/*In simple Overloading is that when two function have same name in a program but the differs in the mean of ARGUMENT passed and Function definition is called OVERLOADING.*/

/*When this overloaded program is complier the complier while execute the overloaded function based on the number of arguent based or type of argument based to the function.*/

/*Thus the process of executing the most appropriate overloaded function based on differ in argument is called as OVERLOAD RESOLUTION.*/

/*Okay, In this lets see about FUNCTION OVERLOADING in C++ Program.*/

/*When two or more function declared with same function name but differ by means of type / number of argument passed is called FUNCTION OVERLOADING.*/

/*NOTE : Overloading a function is not possible when two or more function differ only by return type.*/

/*including preprocessor / headerfile  in the program*/

#include <iostream>

#include <string>

/*using namespace*/

using namespace std ;

/*Declaring a various function with same  function name for function Overloading.*/

void Add( int  , int ) ;

void Add( int , float ) ; 

/*Defining MAIN function of the program.*/

int main( )

{

int a = 10 ;

int b = 20 ;

float c = 30.34 ;

/*calling a function which two parameters of datatype integer.*/
 
Add( a , b ) ;

/*calling a function which two parameters in which one datatype is of integer and other datatype is of float.*/

Add( a , c ) ;

}

/*Defining the function Add( int a , int b ) which has two parameter which has datatype as integer. */

void Add( int a , int b )

{

int sum ;
 
sum = a + b ;

cout << "\nFunction Add( int a , int b) which has two parameter of datatype intger has been executing....." << endl ;

cout << "\nThe Addition of Value "<< a <<" and " << b << " is : " << sum << endl ;

cout << "\nFunction Add( int a , int b) which has two parameter of datatype intger has executed Successfully....." << endl ;

}

void Add( int a , float b )

{

double sum ;
 
sum = a + b ;

cout << "\nFunction Add( int a , float b) which has two parameter of one is of datatype intger  and other is of datatype float has been executing....." << endl ;

cout << "\nThe Addition of Value "<< a <<" and " << b << " is : " << sum << endl ;

cout << "\nFunction Add( int a , float b) which has two parameter of one is of datatype intger  and other is of datatype float has executed Successfully....." << endl ;

}



