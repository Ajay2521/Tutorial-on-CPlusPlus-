//*In this lets see about REFERENCE concept in C++ Program*/ 

/*Reference variable is an alias which is refered to another variable which is already initialized in a Program*/

/*Reference is similar to pointer concept bu the difference is that

1) Reference can't have NULL Reference , that is it must be refer some variable in a program .

2) Once reference is initialized to an object it can't be change is refer to another object like pointer do's.

3) A reference must be initialized at the point of creation . But where as in pointer it can be initialized anytime in the program.

*/

/*synatx for Reference in C++ program is

Datatype& Reference_variable = Actual_variable;

*/

/*In this lets see about REFERENCE AS PARAMETERS concept in Reference*/

/*Reference as parameter is as similar as CALL BY REFERENCE method in c++ program*/

/*including preprocessor in the program*/

#include <iostream>

/*using namespace*/

using namespace std ;

/*creating a user defined function called swap() , which is used to swap the values between them*/

 /* int& x , int& y is a parameter list which is passed in the function swap() , it is also called as reference variable*/ 

void swap( int& x , int& y )

{

/*function body which is used to swap two numbers*/

/*Declearing local varianble of function swap()*/

int temp;

/*by this address of "x" is stored into the variable "temp"*/

temp = x ; 

/*by this address of "y" is stored into the variable "x", that is "x" will have the address of "y"*/

x = y ; 

/*by this value of "temp" is stored into the variable "y" , that is "y" will have the address of "x"*/

y = temp ; 

cout<<"\nValue of A , During swap : " << x << endl ;

cout<<"\nValue of B , Before swap : " << y << endl ;

return ;

}

/*creating a main() function of the program*/

int main()

{

/*Declearing local varianble of function main()*/
 
int a = 10 ;

int b = 20;

cout<<"\nValue of A , Before swap : " << a << endl ;

cout<<"\nValue of B , Before swap : " << b << endl ;

/*calling a user defined function swap()*/

swap( a , b ); 

cout<<"\nValue of A , After swap : " << a << endl ;

cout<<"\nValue of  B , After swap : " << b << endl ;

cout<<"\nThus value of A and B have changes with respect to the change in parameters.Thus any changes in a function which is called by pointer will have a effect over the main function." << endl ;

}