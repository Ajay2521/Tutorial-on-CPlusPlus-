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

/*including preprocessor / headerfile  in the program*/

#include <iostream>

/*using namespace*/

using namespace std ;

int main()

{

/*declare actual variables*/

int i = 10 ;

float f =10.2345 ;

char c = 'A' ; 

double d = 12.2;

/*declare reference variables*/

int& w = i ;

float& x = f ;  

char& y = c ;

double& z = d;

cout << "\nValue of \"i\" : " << i << endl ;

cout << "\nValue of \"w\" which is refered to \"i\" : " << w << endl ;

cout << "\nValue of \"f\" : " << f << endl ;

cout << "\nValue of \"x\" which is refered to \"f\" : " << x << endl ;

cout << "\nValue of \"c\" : " << c << endl ;

cout << "\nValue of \"y\" which is refered to \"c\" : " << y << endl ;

cout << "\nValue of \"d\" : " << d << endl ;

cout << "\nValue of \"z\" which is refered to \"d\" : " << d << endl ;

}