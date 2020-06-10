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
 
/*Lets now see about DESTRUCTOR in this Program.*/

/*Destructor is a special member function which will be executed whenever a object of that class goes out of scope or whenever the delete expression is applied to a pointer of the object of the class.*/

/*NOTE : Destructor will have the same name as a class name  but before its name it wiull have a tilde ( ~ ) symbol and doesn't have any return type in it.*/

/*Destructor is useful where the releasing memories is needed before closing a program file.*/
 
/*including preprocessor / headerfile  in the program*/

#include <iostream>

#include <string>

/*using namespace*/

using namespace std ;

/*creating a class named Student for this program*/

/*MAIN CLASS of the program*/

class Student

{

      public:
	
	string Name;

	int RollNo;

	int MobileNo;

	void PrintStudent(); 
		
	Student () ; // Declaring a constructor

	~Student () ; // Declaring a destructor

};


/*Creating a Constructor Student*/

Student :: Student( void )

{

	cout<<"\nObject has been Created successfully using CONSTRUCTOR...." << endl << endl ;

}

/*Creating a Destructor ~Student*/

Student :: ~Student( void )

{

	cout<<"\nObject has been Deleted successfully using DESTRUCTOR...." << endl << endl ;

}

/*Defining the MAIN class member function*/

void Student :: PrintStudent() 

{

cout<<"\nThe student Name is : " << Name << endl ;

cout<<"\nThe student RollNo is : " << RollNo << endl ;

cout<<"\nThe student MobileNo is : " << MobileNo << endl << endl ;

}

/*creating a main() function of the program*/

int main()

{

/*creating Object called student1 and student2 for the class Student*/

Student student1;

student1.Name = "Maayon" ;

student1.RollNo = 1001001 ;

student1.MobileNo = 1010101010  ;

student1.PrintStudent ( ) ;

}