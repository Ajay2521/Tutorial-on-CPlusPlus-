/*In this program lets see about SCOPE of a Variable in C++ program*/

/*Basically a variable in a C++ program have scope value in 3 places*/

/*1. Inside a function is called LOCAL VARIABLE*/

/*2. Definition of a function parameters is called FORMAL PARAMETERS*/

/*3. Outside all the functions ic called GLOBAL VARIABLE*/

/*Here we see about Local Variable */

/*A variable which is defined inside a function can be used onlu within the function statement or block of code within the function */

/*once the program comes out of the then local variable doesn't have any value or stroage anymore in the program*/

/*Including header file*/

#include<iostream>

/*using namesapce*/

using namespace std ;

/*main function of this program*/

int main()

{

/*declaration of LOCAL VARIABLE*/

int a = 5;

int b = a;

cout<<"\nValue of \"a\" is : "<< a << endl ;

cout<<"\nValue of \"b\" is : "<< b << endl ;

}
 