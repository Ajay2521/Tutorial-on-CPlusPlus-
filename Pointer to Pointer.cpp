/*In this program we will be seeing about POINTERS in C++ Program*/
 
/*Pointer is a type of user defined variable which is used to store the ADDRESS of other variable*/

/*pointers are used for dynamic memory allocation ,which is used when we create a dynamic program*/

/*Pointer To Pointer is a concept which is used to point one pointer variable to an another pointer variable . That is when a pointer to pointer concept is used, then one pointer points to address of a variable , and that pointer variable is used  to point to the address of that pointer variable , which is it is again points to the value of a initial variable*/
 
/*Synatx to declear a Pointer To Pointer Variable

DataType **var-name;

*/

/*including preprocessor / headerfile  in the program*/

#include <iostream>

/*using namespace*/

using namespace std ;

/*creating a main() function of the program*/

int main()

{

/* actual variable declaration */

int a = 10 ;  

/* pointer variable declaration */\

int *ptr ;  

/* pointer to pointer variable declaration */

int **pptr ; 

/* stores the address of "a" in pointer variable "ptr"*/

ptr = &a; 

/* stores the address of "ptr" in pointer to pointer variable "pptr"*/

pptr = &ptr; 

cout<<"\nValue of  variable A : " << a << endl ;

cout<<"\nAddress of  variable A : " << &a << endl ;

cout<<"\nValue stored in variable \"ptr\" : " << ptr << endl ;

cout<<"\nAddress of  variable \"ptr\" : " << &ptr << endl ;

cout<<"\nThe value to which pointer \"ptr\" has been assigned : " << *ptr << endl ;

cout<<"\nValue stored in variable \"pptr\" : " << pptr << endl ;

cout<<"\nAddress of  variable \"pptr\" : " << &pptr << endl ;

cout<<"\nThe value to which pointer \"pptr\" has been assigned : " << **pptr << endl ;

}