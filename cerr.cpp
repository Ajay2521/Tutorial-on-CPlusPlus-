/*In this program we will be seeing about INPUT AND OUTPUT in C++ Program*/

/*In C++ Program iostream is a standard library function which contains functions like cin , cout, cerr , c log etc...*/

/*In this program lets see about CERR in c++ program*/

/*cerr is said to be attached to the standard error device , in our case the error device is display screen but the object cerr is un-buffered and each stream insert to cerr causes its ouput to appear immediately.*/

/*cerr is an OSTREAM class.*/

/*cerr is used with a conjunction of insertion operation , which is two less than symbol " << " */

/*Synatx for cerr is

cerr << "Error Message " ;

*/
 
/*including preprocessor / headerfile  in the program*/

#include <iostream>

#include <string>

/*using namespace*/

using namespace std ;

/*creating a main() function of the program*/

int main()

{

/*Declaring Message as a string data type*/

string Message = "UNABLE TO READ....." ;
 
/*Displaying String Message using cerr*/

cerr << "\nError Message : " << Message << endl ;

}