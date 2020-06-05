/*In this program we will be seeing about Functions in C++ Program*/

/*Function is a group of statements / code formed together , for doing a specific task in a C++ program*/

/*NOTE : C++ program atleast must have one function , the default function is called as main()*/

/*Functions used to call specific code whenever needed in the program, Thus functions are used for code reuseability*/

/*functions are also known as method , sub - routine , procedure etc...*/

/*In this program lets see about DEFAULT VALUES FOR PARAMETERS*/

/*while creating a function a default value for each parameter can be declared, thus when a function is called by passing without a specific value or variable, Then this functions work by using this default value which is assigned to the parameter while creating a function.*/

/*when a function is called by passing a specific value or variable, then default value of parameters is ignored and function works with the passed value or a variable*/
    
/*including preprocessor in the program*/

#include <iostream>

/*using namespace*/

using namespace std ;

/*creating a user defined function called add()*/

int add( int  a = 100 , int b = 200 ) 

/* int a , int b is a parameter list which is passed in the function add */ 

{

/*function body which is used to add two numbers*/

/*Declearing local varianble of function add()*/

int sum;

sum = a + b ;

cout<<"\nThe addition of value "<< a << " and "<< b << " is : " << sum << endl ;

return 0;

}

/*creating a main() function of the program*/

int main()

{

/*Declearing local varianble of function main()*/
 
int a = 10 ;

int b = 20;

/*calling the function add() into the main program*/

add ( a , b ) ; 

/*calling the function add() into the main program by only one parameter "a"*/

add ( a  );

/*calling the function add() into the main program by only one parameter "b"*/

add (  b ) ; 

/*calling the function add() into the main program by no parameters*/

add ( ) ; 

}

