/*C++ is different from C program by means of Classes and Object.*/

/*Class is used to specify the form of an object.*/

/*method are used for manipulating that data into neat packages.*/

/*Data and functions within a class are called members of the class.*/

/*Class will be used to define the blueprint for a data type.*/

/*Object is create from a class.*/

/*syntax to declare a class is

class class_name

{

     access_specifier :

	DataType variable1 ;

	DataType variable2 ; 

	DataType variable3 ;

	.
	.
	.

	DataType variable n ;

} ;

/*syntax of object is

Class_name Object_name ; 

*/

/*class can be accessed using member access operator ( . ) which is also called as DOT operator*/
 
/*Lets now see about COPY CONSTRUCTOR in this Program.*/

/*Copy Constructor is a constructor which creates an object by initializing it with an object of same class , which is alread created one.*/

/*Copy Constructor is used when

1) Initialize from one object fromm another object which is of same type.

2) Coby an object to pass it as an argument to a function.

3) Copy an object to return it from a function.

*/

/*In absence of Copy constructor , The C++ compiler will be creating one by default.*/

/*Syntax of Copy Constructor is

class_name ( const class_name &object )

{

 	//statement ( s ) / code / boby of copy constructor 

}

*/

/*including preprocessor / headerfile  in the program*/

#include <iostream>

#include <string>

/*using namespace*/

using namespace std ;

/*creating a class named Student for this program*/

/*MAIN CLASS of the program*/

class Number

{

      public:
	
	int a ;

	Number ( int b )  //Parameterized Constructor

	{

		a = b ;

	}

	Number( Number &x )  //Copy Constructor  	
 
	{

		a = x.a ;

	}		

};

/*creating a main() function of the program*/

int main()

{

Number a1(101);

Number a2(a1);

cout<<"\nThe value of a1 from Normal Constructor is : " << a1.a << endl ;

cout<<"\nThe value of a2 from Copy Constructor is : " << a2.a << endl ;

}