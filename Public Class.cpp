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
 
/*In this program lets see CLASS ACCESS MODIFIERs in C++ Programming*/

/*data hiding is one of the most important features of OOPS , which a;llows preventing data access from unauthorished peoples*/

/*NOTE : access specifier is used to specify the access of that data's in a program.*/

/*There are 3 types of access Specifier PUBLIC, PRIVATE and PROTECTED.*/

/*syntax of access modifier

class class_name {

public:

// public members go here

protected:

// protected members go here

private:

// private members go here

};

*/

/*Lets now see about PUBLIC MEMBER in this Program.*/

/*PUBLIC member can be accessed from anywhere in the program whichout any member function.*/ 
 
/*including preprocessor / headerfile  in the program*/

#include <iostream>

#include <string>

/*using namespace*/

using namespace std ;

/*creating a class named Student for this program*/

class Student

{

      public:
	
	string Name;

	int RollNo;

	int MobileNo;

	void printStudent(  ) ;

};

/* function definition */

void Student :: printStudent(  )

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

Student student2;

student1.Name = "Maayon" ;

student1.RollNo = 1001001 ;

student1.MobileNo = 1010101010 ;

student2.Name = "Tech Guru" ;

student2.RollNo = 1011011 ;

student2.MobileNo = 1212121212 ;

student1.printStudent ( ) ;

student2.printStudent (  ) ;

}