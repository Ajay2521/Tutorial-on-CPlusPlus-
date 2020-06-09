/*In this program we will be seeing about INPUT AND OUTPUT in C++ Program*/

/*In C++ Program iostream is a standard library function which contains functions like cin , cout, cerr , c log etc...*/

/*In this program lets see about CIN in c++ program*/

/*cin is said to be attached to the standard input device in our case the input device is keyboard*/

/*cout is an ISTREAM class.*/

/*cin is used with a conjunction of extraction operation , which is two greater than symbol " >> " */

/*Synatx for cin is

cin >> Input_Variable ;

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

string Name ;

/*Declaring Age as an int data type*/

int Age ;

/*Getting the Values from user using cin*/

cout << "\nEnter your Name : " ;

cin >> Name ;

cout << "\nEnter your Age : " ;

cin >> Age ;

/*Displaying String Name and int Age using cout*/

cout << "\nHello ,\n\nThis is " << Name << ".... \n\nMy age is : "<< Age << endl ;

}