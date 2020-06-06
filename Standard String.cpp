/*In this program we will be seeing about STRING in C++ Program*/

/*C++ provide 2 types of String representations:

1) C- Style Character string - which is as similar in C Program.

2) The string Class type which is specially introduced with Standard C++.

*/

/*Strings in C++ Programming is also know as a One Dimensional Array of characters. Thus string contains a character Array which is terminated by a NULL character "\0"*/

/*By Default C++ compiler initialize a Null character at the end of every String . Therefore no woriies about the null character . Just have a note on it.*/
 
/*In this program lets see some string functons used in C++ Programming*/

/*In this lets see the standard string in c++, which is more powerfull and many more functionality in this standard string library*/

/*including preprocessor / headerfile  in the program*/

#include <iostream>

/*string is a Standard c++ library for strings in C++ Program*/

#include <string> 

/*using namespace*/

using namespace std ;


/*creating a main() function of the program*/

int main()

{

string str1 = "String";

string str2 = "Program";

string str3 ;

string str4 = "Strings";

/*strlen() in Standard C++ string library is by using size() */

/*Synatx for finding a string length is

string.size();

*/

cout<<"\nThe length of the String 1 " << str1 << " is ::: " << str1.size() << endl ;

cout<<"\nThe length of the String 2 " << str2 << " is ::: " << str2.size() << endl ;

cout<<"\nThe length of the String 4 " << str4 << " is ::: " << str4.size() << endl ;

/*strcpy() can be simply done by assigning it to other string*/

/*Synatx for assigning a string is

string2 = string1;

*/

str3 = str1;

cout<<"\nThe value which is copied to str3 from str1 is ::: " << str3 << endl ;

/*strcat() can be done easy like how we add 2 numbers .*/

/*Synatx Adding string is

str3 = str1 + str2 ;

*/

str1 = str1 + str2 ;

cout<<"\nThe concatenates the two strings is ::: " << str1 << endl ;

}