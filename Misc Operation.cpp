/*In this program we will be seeing all the Misc Operators like Sizeof, Adress , pointer , Conditional Expression avaliable in C++*/

/*including preprocessor in the program*/

#include <iostream>

/*using namespace*/

using namespace std ;

/*creating a main() function of the program*/

int main()

{

/*Declaring Variable 'a=10' of data type int  ,creating a Variable 'b' with no initial value  with datatype float and creating a Variable 'c' with no initial value  with datatype double is declared and pointer is created*/ 

/*Note: No worries about pointer , address and conditional Expression, it will explained later on */

int a = 10;

float b;

double c;

int* ptr;

/* example of sizeof operator */

cout<<"\nSize of variable 'a' of data type int = " << sizeof(a) << endl ;

cout<<"\nSize of variable 'b'  of data type float = " << sizeof(b) << endl ;

cout<<"\nSize of variable 'c' of data type double = "<< sizeof(c) << endl ;

/* example of & and * operators */

/*Address(&) is used to return the address of a variable stored*/

ptr = &a;  /* 'ptr' now contains the address of 'a'*/

cout<<"\nValue of a is " << a <<endl ;

cout<<"\nAddress of a is " << &a << endl ;

cout<<"\nValue of *ptr is " << ptr << endl ;

cout<<"\n*ptr is " << *ptr << endl ;

/* example of ternary operator */

/*conditional operator is also known as Ternary Operator it is defined as when the condition is true then first expression will excuted , if the condition fails then second expression will be excuted . Syntax for Ternary Operator is "Variable = Condition ? Expression 1 :Expression2;"*/

int x = 10;

int y = 30;

int z = ( x < y ) ? x : y ;

cout<< "\nValue of z is " << z << endl ;

}