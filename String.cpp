/*In this program we will be seeing about STRING in C++ Program*/

/*C++ provide 2 types of String representations:

1) C- Style Character string - which is as similar in C Program.

2) The string Class type which is specially introduced with Standard C++.

*/

/*Strings in C++ Programming is also know as a One Dimensional Array of characters. Thus string contains a character Array which is terminated by a NULL character "\0"*/

/*By Default C++ compiler initialize a Null character at the end of every String . Therefore no woriies about the null character . Just have a note on it.*/
 
/*In this program lets see some string functons used in C Programming*/

/*including preprocessor / headerfile  in the program*/

#include <iostream>

/*cstring is a predifined preprossor used to work with Strings in C++ Program*/

#include <cstring> 

/*using namespace*/

using namespace std ;


/*creating a main() function of the program*/

int main()

{

char str1[20] = "String";

char str2[20] = "Program";

char str3[20];

char str4[20] = "Strings";

/*strlen() is an perdefined function which is used find the length of the String */

/*Synatx for strcat() is

strlen( String Variable );

*/

cout<<"\nThe length of the String 1 " << str1 << " is ::: " << strlen(str1) << endl ;

cout<<"\nThe length of the String 2 " << str2 << " is ::: " << strlen(str2) << endl ;

cout<<"\nThe length of the String 4 " << str4 << " is ::: " << strlen(str4) << endl ;

/*strcpy() is an perdefined function which is used  copy a source String to the Destination String */

/*Synatx for strcpy() is

strcpy( Destination String Variable , Source String Variable ) ;

*/

strcpy(str3, str1);

cout<<"\nThe value which is copied to str3 from str1 is ::: " << str3 << endl ;

/*strcpy() is an perdefined function which is used concatenates two strings together and place it at the end of first string variable*/

/*Synatx for strcat() is

strcat( String Variable 1 , String Variable 2 ) ;

*/

strcat( str1, str2);

cout<<"\nThe concatenates the two strings is ::: " << str1 << endl ;

/*strchr() is an perdefined function which is used find the first occurrence of that character in a String */

/*Synatx for strchr() is

strlen( String Variable , 'character to be find' ) ;

*/

cout<<"\nThe first occurence of the finding character in String 1 "<< str1<<" is from ::: " << strchr( str1 , 'g' ) << endl ;

/*strcmp() is an perdefined function which is used compare two strings , is the two string are same then it returns 0 , if first string is greater then second string then it return a value greater than 0,  if first string is lesser then second string then it return a value lesser than 0*/

/*Synatx for strcmp() is

strlen( String Variable 1 , String Variable 2 ) ;

*/

if ( strcmp( str3 , str4) == 0 )

{

cout<<"\nSince str3 and str4 is same which returns ZERO.Thus strcmp() works well."<< endl ;

}

else if ( strcmp( str3 , str4) < 0 )

{

cout<<"\nSince str3 and str4 is not same and str3 is lesser than ZERO which returns a value Lesser than ZERO.Thus else if statement is executed." << endl ;

}

else 

{

cout<<"\nSince str3 and str4 is not same and str3 is Greater than ZERO which returns a value Greater than ZERO.Thus else  statement is executed." << endl ;

}

/*strstr() is predefined function in string which is used for finding a occurance of one string in onther string, also know as substring finding*/

/*synatx for strstr()

strstr( string which is to be examined , string which we gonna found in examine string);

*/

char *strF;

strF = strstr( str1 , str3);

if (strF)

{

cout<<"\nThe Sub String of str2 is FOUND in str1."<< endl ;

}

else

{

cout<<"\nThe Sub String of str2 is NOT FOUND in str1."<< endl ;

}

}