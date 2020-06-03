/*In this program lets see about SCOPE of a Variable in C++ program*/

/*Basically a variable in a C++ program have scope value in 3 places*/

/*1. Inside a function is called LOCAL VARIABLE*/

/*2. Definition of a function parameters is called FORMAL PARAMETERS*/

/*3. Outside all the functions ic called GLOBAL VARIABLE*/

/*Here we see about Global Variable */

/*A variable which is defined outside of all the function is called as GLOBAL VARIABLE*/

/*In Global variable , once a variable is declared as a global variable then its life time is the life time of a program and it can be accessed by all the functions present in the program*/

/*Including header file*/

#include<iostream>

/*using namesapce*/

using namespace std ;

/*main function of this program*/

/*declaration of GLOBAL VARIABLE*/

int a = 10 ;

int main()

{

cout<<"\nValue of \"a\" which is declared as a GLOBAL VARIABLE : "<< a << endl ;

/*declaration of LOCAL VARIABLE*/

int a = 5;

cout<<"\nValue of \"a\" which is declared as a LOCAL VARIABLE : "<< a << endl ;

}
 