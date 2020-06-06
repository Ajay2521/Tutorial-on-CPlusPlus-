/*In this program we will be seeing about POINTERS in C++ Program*/
 
/*Pointer is a type of user defined variable which is used to store the ADDRESS of other variable*/

/*pointers are used for dynamic memory allocation ,which is used when we create a dynamic program*/

/*Synatx to declare a Pointer Variable

DataType *var-name;

*/

/*including preprocessor / headerfile  in the program*/

#include <iostream>

/*using namespace*/

using namespace std ;

/*creating a main() function of the program*/

int main()

{

/* actual variable declaration */

int a = 10;  

/* pointer variable declaration */

int *ptr;  

/* stores the address of "a" in pointer variable "ptr"*/

ptr = &a; 

cout<<"\nValue of  variable A : " << a << endl ;

cout<<"\nAddress of  variable A : "<< &a << endl ;

cout<<"\nValue stored in variable \"ptr\" : " << ptr  << endl ;

cout<<"\nAddress of  variable \"ptr\" : " << &ptr << endl ;

cout<<"\nThe value to which pointer \"ptr\" has been assigned : "<< *ptr << endl ;

}