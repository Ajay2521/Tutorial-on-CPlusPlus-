/*In this program we will be seeing Conditional Expression which is also known as Ternary Operator avaliable in C++*/

/*conditional operator is also known as Ternary Operator it is defined as when the condition is true then first expression will excuted , if the condition fails then second expression will be excuted .*/

/*Syntax for Ternary Operator  

Variable = Expression 1 ? Expression 2 : Expression 3 ;

*/

/*Note : This ternary operator is used to replace if...else statement*/

/*including preprocessor in the program*/

#include <iostream>

/*using namespace*/

using namespace std ;

/*creating a main() function of the program*/

int main()

{

int x = 10;

int y = 30;

/*In this when x is lesser than y ,then z takes the value of x, else z takes the value of y.*/
 
int z = ( x < y ) ? x : y ;

cout<< "\nValue of z is " << z << endl ;

}