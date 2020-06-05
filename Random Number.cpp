/*In this lets see more about NUMBERS in c++ program.*/

/*In c++ program we usually use int, float, short, long are major Data Types used for defining and using numbers.*/

/*Random numbers are generatored using rand() which will return a pseudo random number in C++ Program. and srand() is function used to print random numbers for various time of execution.*/

/*including preprocessor / headerfile  in the program*/

#include <iostream>

#include <ctime>

#include <cstdlib> 

/*using namespace*/

using namespace std ;

/*creating main() function of the program*/

int main ()

{

// set the seed

srand( (int)time( NULL ) );

/*used to print 10 random numbers*/

for ( int i = 1 ; i <= 10 ; i++)

{

	cout<<"\nRandom Number " << i << " = "<< rand() <<endl ;

}

}