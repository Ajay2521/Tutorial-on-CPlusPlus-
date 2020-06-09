/*In this program we will be seeing about INPUT AND OUTPUT in C++ Program*/

/*In C++ Program iostream is a standard library function which contains functions like cin , cout, cerr , c log etc...*/

/*In this program lets see about COUT in c++ program*/

/*cout is said to be connected to the standard output device in our case the output device is display screen or monitor*/

/*cout is used with a conjunction of insert operation , which is two less than symbol " << " */

/*Synatx for cout is

cout << "MESSAGE TO BE DISPLAYED . " ;

*/
 
/*including preprocessor / headerfile  in the program*/

#include <iostream>

#include <string>

/*using namespace*/

using namespace std ;

/*creating a main() function of the program*/

int main()

{

/*Declaring Name as a string data type*/

string Name = "Maayon" ;

/*Declaring Age as an int data type*/

int Age = 19 ;

/*Displaying String Name and int Age using cout*/

cout << "\nHello ,\n\nThis is " << Name << ".... \n\nMy age is : "<< Age << endl ;

}