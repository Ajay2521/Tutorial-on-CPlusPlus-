/*In this lets see about INLINE FUNCTONS in C++ Program.*/

/*Inline is a powerful concept that is used with classes.*/

/*Complier places a copy of the code of a function at each point where the function is called at compile time.*/

/*Thus any change to a inline function then all clients of the function has to be recomplied because compiler would need to replace all the code once again ,else it continue with old code and functionality*/

/*keyword inline is used before a function to make the function as an inline function.*/

/*including preprocessor in the program*/

#include <iostream>

/*using namespace*/

using namespace std ;

/*creating a inline function called add()*/

inline int add( int  x , int y ) 

/* int x , int y is a parameter list which is passed in the function add */ 

{

/*function body which is used to add two numbers*/

/*Declearing local varianble of function add()*/

int sum;

sum = x +y ;

return sum ;

}

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

