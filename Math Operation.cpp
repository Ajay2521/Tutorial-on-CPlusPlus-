/*In this lets see more about NUMBERS in c++ program.*/

/*In c++ program we usually use int, float, short, long are major Data Types used for defining and using numbers.*/

/*C and C++ has many built in functions , one amoung it was math , which contains amny functions related to math operations*/

/*including preprocessor / headerfile  in the program*/

#include <iostream>

/*headerfile which contains all Math operations.*/

#include <cmath> 

/*using namespace*/

using namespace std ;

/*creating main() function of the program*/

int main ()

{

/* number definition and assignments.*/

double d = 12.3456789 ;

/*using built in Math operations*/

cout << "\nValue of sin(d) : " << sin(d) << endl ;

cout << "\nValue of cos(d) : " << cos(d) << endl ;

cout << "\nValue of tan(d): " << tan(d) << endl ;

cout << "\nValue of log(d) : " << log(d) << endl ;

cout << "\nValue of abs(d) : " << abs(d) << endl ;

cout << "\nValue of fabs(d) : " << fabs(d) << endl ;

cout << "\nValue of floor(d) : " << floor(d) << endl ;

cout << "\nValue of sqrt(d) : " << sqrt(d) << endl ;

cout << "\nValue of pow(d , 3) : " << pow(d , 3) << endl ;

}