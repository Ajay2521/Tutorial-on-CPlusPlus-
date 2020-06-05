/*In this program we will be seeing about Functions Arguments in C++ Program*/

/*If a function is to use arguments, it must declare variables that accept the
values of the arguments. These variables are called the formal parameters of
the function.*/

/*Ther are 3 types of calling a function in a c++ program they are "call by value" ,"call by pointer" and " call by reference" . we will see this concepts one by one. */

/*In this program we will see about " CALL BY REFERENCE"*/

/*Call by reference is method used to call a function by using the address of the actual parameters. Thus this method passes the address of actual parameter to the function . Thus any change in a fuction will have an effect with a actual parameters of a main function.*/ 

/*Call by Reference is similar to Call by Pointer, Thus in both any changes in parameter will have a effect in passed arguments*/

/*including preprocessor in the program*/

#include <iostream>

/*using namespace*/

using namespace std ;

/*creating a user defined function called swap() , which is used to swap the values between them*/

 /* int &x , int &y is a parameter list which is passed in the function swap() */ 

void swap( int &x , int &y )

{

/*function body which is used to swap two numbers*/

/*Declearing local varianble of function swap()*/

int temp;

temp = x ; /*by this address of "x" is stored into the variable "temp"*/

x = y ; /*by this address of "y" is stored into the variable "x", that is "x" will have the address of "y"*/

y = temp ; /*by this value of "temp" is stored into the variable "y" , that is "y" will have the address of "x"*/

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