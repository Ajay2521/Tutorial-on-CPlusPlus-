/*In this program we will be seeing about ARRAY in C++ Program*/

/*Array in a C++ Program is a kind of data type which is an user Defined data type, which is used to store a Collection of data which have same data type.*/

/*ADVANTAGE OF ARRAY : When used need to store many values of same data type, he/she can't ale to declear so many Varaile, instead of that he/she can Create an simple Array to store many datas of similar Data Type. */

/*DISADVANTAGE : Storeing datas of different data type is not possible in array*/

/*Array element can be accessed by using the Array index value , thus array's are stored using index , Usually Array index starts with ZERO.*/

/*IN THIS LET SEE ABOUT ARRAY TO FUNCTION CONCEPT*/

/*C++ does not allow to pass an entire array as an argument to a function.*/

/*But Array can be Passed to Pointer and then Pointer can be passed to a function in 3 different method and this 3 different method will be resulting in a same outcome*/

/*Syntax to Formal parameters as a pointer as

void myFunction(int *parameter)

{

.
.
.

}

*/

/*Syntax to Formal parameters as a sized array as

void myFunction(int parameter[ 100 ])

{

.
.
.

}

*/

/*Syntax to Formal parameters as a Unsized array as

void myFunction(int parameter[])

{

.
.
.

}

*/
 
/*including preprocessor / headerfile  in the program*/

#include <iostream>

/*using namespace*/

using namespace std ;

/*creating a user defined function called add()*/

int add( int  x[ ]) 

/* int x , int y is a parameter list which is passed in the function add */ 

{

/*function body which is used to add two numbers*/

/*Declearing local varianble of function add()*/

int sum = 0;

for ( int i = 0 ; i < 3 ; i++ )

{

sum += x[ i ]  ;

}

return sum ;

}

/*creating a main() function of the program*/

int main()

{

/*Declaring an array of A*/

int arrA[3] ={ 1 , 2 , 3 } ;

int sum;

/*pass pointer to the array as an argument*/

sum = add( arrA ) ;

cout<<"\nSum of Array A is : "<< sum <<endl ;

}