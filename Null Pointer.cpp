/*In this program we will be seeing about POINTERS in C++ Program*/
 
/*Pointer is a type of user defined variable which is used to store the ADDRESS of other variable*/

/*pointers are used for dynamic memory allocation ,which is used when we create a dynamic program*/

/*In this program Lets see about NULL pointer*/

/*Null pointers are initialized when there is no actual variable to assign to the pointer variable*/

/*including preprocessor / headerfile  in the program*/

#include <iostream>

/*using namespace*/

using namespace std ;

/*creating a main() function of the program*/

int main()

{

/* pointer variable declaration */

int *ptr;  

/* Assigning a NULL pointer*/

ptr = NULL; 

cout<<"\nValue stored in variable \"ptr\" : " << ptr << endl ;

cout<<"\nAddress of  variable \"ptr\" : " << &ptr << endl ;

}