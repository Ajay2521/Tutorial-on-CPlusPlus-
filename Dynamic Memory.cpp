/*In this lets see about DYNAMIC MEMORY concept in C++ Program . */

/*The concept of Dynamic Memory allocation plays a vital role in C++ Program .*/

/*Memory in C++  program is divided into

1) Stack = All variable declared inside the function will take up memory from the stack.

2) Heap = This is an unused memory of the program and can be used to allocate the memory dynamically when program runs.

*/

/*"new " operator is used to declare a variable dynamically while running the program . */

/*Syntax for new operator is

new Data_Type ;

*/

/* " delete "ōperator is used to deallocate the allocated memory , when there is no need or use of it anymore in the program.*/

/*Syntax for delete operator is

delete Varible_Name ;

*/

/*including preprocessor / headerfile  in the program*/

#include <iostream>

#include <string>

/*using namespace*/

using namespace std ;

/*Mian ( ) of the program */

int main ( )

{

/*Declaring the Pointer Variable Data with NULL value. */

int* Data = NULL ;

/*allocation memory for the variable Data Dynamically.*/

Data = new int ;

cout << "\nValue present in the variable Data Before Allocation is : " << *Data << endl ;

*Data = 1234567890 ;

cout << "\nValue present in the variable Data After allocation and Before de-allocation is : " << *Data << endl ;

/*De-Allocating the memory of the variable Data*/

delete Data ;

cout << "\nValue present in the variable Data After de-allocation is : " << *Data << endl ;

}
