/*In this lets see about REFERENCE concept in C++ Program*/ 

/*Reference variable is an alias which is refered to another variable which is already initialized in a Program*/

/*Reference is similar to pointer concept bu the difference is that

1) Reference can't have NULL Reference , that is it must be refer some variable in a program .

2) Once reference is initialized to an object it can't be change is refer to another object like pointer do's.

3) A reference must be initialized at the point of creation . But where as in pointer it can be initialized anytime in the program.

*/

/*synatx for Reference in C++ program is

Datatype& Reference_variable = Actual_variable;

*/

/*In this lets see about how Reference as Return Value*/

/*including preprocessor / headerfile  in the program*/

#include <iostream>

/*using namespace*/

using namespace std ;

int vals[] = { 10, 12, 12, 13, 14 } ;

int& setValues( int i )

{
/* return a reference to the ith element*/

return vals[i]; 

}

/* main function of the program*/

int main ()

{

cout << "\nValue Before change by using normal variable..." << endl << endl ;

for ( int i = 0; i < 5; i++ )

{

cout << "\nvals[" << i << "] = " << vals[i] << endl ;

}

cout << "\n\nValue Before change by using Reference variable function...." << endl << endl ;

for ( int i = 0; i < 5; i++ )

{

cout << "\nsetValues[" << i << "] = " << setValues(i) << endl ;

}

/*change 2nd element*/

setValues(1) = 11; 

cout << "\n\nValue After change by using normal variable...." << endl << endl ;

for ( int i = 0; i < 5; i++ )

{

cout << "\nvals[" << i << "] = " << vals[i] << endl ;

}

cout << "\n\nValue After change by using Reference variable function...." << endl << endl ;

for ( int i = 0; i < 5; i++ )

{

cout << "\nsetValues[" << i << "] = " << setValues(i) << endl ;

}

}