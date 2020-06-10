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
 
/*Lets now see about CONSTRUCTOR in this Program.*/

/*Constructor is a special member function which will be executed whenever a new object of that class is created.*/

/*NOTE : Constructor will have the same name as a class name and doesn't have any return type in it.*/
 
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
};


/*Creating a Constructor Student*/

Student :: Student( void )

{

	cout<<"\nObject has been Created successfully using CONSTRUCTOR...." << endl << endl ;

}

/*Defining the MAIN class member function*/

void Student :: PrintStudent() 

{

cout<<"\nThe student Name is : " << Name << endl ;

cout<<"\nThe student RollNo is : " << RollNo << endl ;

cout<<"\nThe student MobileNo is : " << MobileNo << endl ;

}

/*creating a main() function of the program*/

int main()

{

/*creating Object called student1 and student2 for the class Student*/

Student student1;

student1.Name = "Maayon" ;

student1.RollNo = 1001001 ;

student1.MobileNo = 1010101010  ;

Student student2;

student2.Name = "Tech Guru" ;

student2.RollNo = 1011011 ;

student2.MobileNo = 1212121212  ;

student1.PrintStudent ( ) ;

student2.PrintStudent ( ) ;

}