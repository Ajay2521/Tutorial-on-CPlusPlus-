/*In this program we will be seeing about INPUT AND OUTPUT in C++ Program*/

/*In C++ Program iostream is a standard library function which contains functions like cin , cout, cerr , c log etc...*/

/*In this program lets see about CLOG in c++ program*/

/*clog is said to be attached to the standard error device , in our case the error device is display screen but clog is buffered .*/

/*clog is an OSTREAM class.*/

/*clog is used with a conjunction of insertion operation , which is two less than symbol " << " */

/*Synatx for clog is

clog << "Error Message " ;

*/

/*Note : cout, cerr, clog looks similar in woking but when it is used in large program then we can able to see lot of difference in them.*/
  
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

clog << "\nError Message : " << Message << endl ;

}