/*In this program we will be seeing about typedef in C++ Program*/

/*In C++ Program typedef is a keyword which is used to give a type to a new name. That is we can able to assign a data type functionallity to a newly decleared variable name.*/

/*In this program lets see a simple typedef used in C++ Programming*/

/*Synatx to define a typedef in c++ programming

typedef DataType newname;

*/


/*including preprocessor in the program*/

#include <iostream>

/*using namesapce*/

using namespace std ;

/*creating a main() function of the program*/

int main()

{

typedef int Number ;

typedef double RealNumber ;

typedef char Character ;

Number a ;

RealNumber b ;

Character c;

cout<<"\nSize of Number is ::: "<<sizeof( Number )<<endl ;

cout<<"\nSize of RealNumber is ::: "<<sizeof( RealNumber )<<endl ;

cout<<"\nSize of Character is ::: "<<sizeof( Character )<<endl ;

cout<<"\nSize of a Variable which is defined as Number \"a\" is ::: "<<sizeof(a)<<endl ;

cout<<"\nSize of a Variable which is defined as RealNumber \"b\" is ::: "<<sizeof(b)<<endl ;

cout<<"\nSize of a Variable which is defined as Character \"c\" is ::: "<<sizeof(c)<<endl ;

}