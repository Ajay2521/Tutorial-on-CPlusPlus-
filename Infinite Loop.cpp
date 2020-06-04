/*In this program we will be seeing about INFINITE LOOP in C++ Program*/

/*An infinite loop is a loop that run ever lasting and inifinite loop occures only when the condition never comes to an end. In other mean the condition never fails.*/

/*including preprocessor / header file in the program*/

#include <iostream>

/*using namespace*/

using namespace std ;

/*creating a main() function of the program*/

int main()

{

/*Note : This program will be resulting in infinite loop*/

/*Note : To STOP inifinite loop press Ctrl + c.*/

for ( ; ; )

{

cout<<"\nInfinite loop Runs for forever..." << endl ;

}

}