/*In this program we will be seeing about Functions in C++ Program*/

/*Function is a group of statements / code formed together , for doing a specific task in a C++ program*/

/*NOTE : C++ program atleast must have one function , the default function is called as main()*/

/*Functions used to call specific code whenever needed in the program, Thus functions are used for code reuseability*/

/*functions are also known as method , sub - routine , procedure etc...*/

/*Synatx for creating a user defined function 

return_type function_name ( parameter list )

{

body of the function

}

*/

/* "return_type" - return type of the function like void , int etc...*/

/* "function_name" - function name which will be user defined name , function is called by using this function name only */

/*"parameter list' - which is passing a variable or a value while calling the function. */

/* "body of the function " - where actual code or statement and working of the function present.*/
  
/*including preprocessor in the program*/

#include <iostream>

/*using namespace*/

using namespace std ;

/*Declaring a function called add()*/

int add ( int x , int y ) ;

/*creating a main() function of the program*/

int main()

{

/*Declearing local varianble of function main()*/
 
int a = 10 ;

int b = 20;

int c = 30;

int sum;

/*calling the function add() into the main program*/

sum = add ( a , b ) ; 

cout<<"\nThe addition of value "<< a << " and "<< b << " is : " << sum << endl ;

/*calling the function add() into the main program*/

sum = add ( a , c );

cout<<"\nThe addition of value "<< a << " and "<< c << " is : " << sum << endl ;

/*calling the function add() into the main program*/

sum = add ( b , c ) ; 

cout<<"\nThe addition of value "<< b << " and "<< c << " is : " << sum << endl ;

}

/*creating a user defined function called add()*/

int add( int  x , int y ) 

/* int x , int y is a parameter list which is passed in the function add */ 

{

/*function body which is used to add two numbers*/

/*Declearing local varianble of function add()*/

int sum;

sum = x +y ;

return sum ;

}

