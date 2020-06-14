/*In this lets see about INTERFACE and ABSTRACT CLASSES in C++ Program.*/

/*An interface is used to describe the behavior or capabilities of a C++ class without committing to a particular implementation of that class.*/

/*C++ interface are implemented by using the ABSTRACT CLASSES.*/

/*To make an abstract class it is done by declaring at least one of its member function as a pure virtual function.*/

/*Synatx to declare ABSTRACT CLASS using VIRTUAL FUNCTION is

class class_name

{

    Access_specifier :

	//Pure virtual function

	virtual DataType Member_Function ( ) = 0 ;

                  DataType Member 1 ;

	DataType Member 2 ;

	.
	.
	.

	DataType Member N ;

};

*/

/*The main purpose of an abstract class which is often referred to as an ABC  is to provide an appropriate base class from which other classes can inherit. */

/*Abstract classes cannot be used to instantiate objects and serves only as an interface. Attempting to instantiate an object of an abstract class causes a compilation error.*/

/*Classes that can be used to instantiate objects are called concrete classes.*/

/*including preprocessor / headerfile  in the program*/

#include <iostream>

#include <string>

/*using namespace*/

using namespace std ;

/*Base class of the program.*/

class Shape

{
 
    public:

	/*pure virtual function providing interface.*/

	virtual int GetArea( ) = 0;

	void SetWidth(int w)

	{

	width = w;

	}

	void SetHeight(int h)

	{

	height = h;

	}

      protected:

	int width;

	int height;

};

/* Derived classes which is derived from a base class Shape.*/

class Rectangle : public Shape

{

     public:
	
	int GetArea( )

	{

	return (width * height);

	}

};

/* Derived classes which is derived from a base class Shape.*/

class Triangle : public Shape

{

    public:

	int GetArea()

	{

	return (width * height) / 2 ;

	}

};

/*Main Function of the program.*/

int main(void)
{

Rectangle Rect;

Triangle Tri;

Rect.SetWidth( 10 );

Rect.SetHeight( 10 );

/* Print the area of the object Rect.*/

cout << "\nArea of the Rectangle is : " << Rect.GetArea( ) << endl ;

Tri.SetWidth( 10 );

Tri.SetHeight( 10 );

/*Print the area of the object Tri.*/

cout << "\nArea of the Triangle is : " << Tri.GetArea( ) << endl ;

}