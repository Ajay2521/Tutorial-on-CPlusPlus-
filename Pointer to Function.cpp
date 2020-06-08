/*In this program we will be seeing about POINTERS in C++ Program*/
 
/*Pointer is a type of user defined variable which is used to store the ADDRESS of other variable*/

/*pointers are used for dynamic memory allocation ,which is used when we create a dynamic program*/

/*In this program lets see about passing a pointer to a function in aprogram*/

/*including preprocessor / headerfile  in the program*/

#include <iostream>

/*using namespace*/

using namespace std ;

/* function declaration */

double Average(int *arr, int size);

/*creating a main() function of the program*/

int main()

{

/* an int array with 5 elements */

int balance[5] = {10 , 20 , 30 , 40 , 50};

double avg;

/* pass pointer to the array as an argument */

avg = Average( balance, 5 ) ;

/* output the returned value */

cout<<"\nAverage value is: " << avg << endl ;

}

double Average(int *arr, int size)

{

int i, sum = 0;

double avg;

for (i = 0; i < size; ++i)

{
	
	sum += arr[i];

}

avg = (double)sum / size;

return avg;

}