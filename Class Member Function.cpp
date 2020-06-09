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

/*NOTE : access specifier is used to specify the access of that data's in a program.*/

/*There are 3 types of access Specifier PUBLIC, PRIVATE and PROTECTED.NO WORRIES IT WILL BE COVERED LATER ON .*/

/*syntax of object is

Class_name Object_name ; 

*/

/*class can be accessed using member access operator ( . ) which is also called as DOT operator*/
 
/*In this program lets see CLASS MEMBER FUNCTIONS in C++ Programming*/

/*NOTE : Functions are also called as Members in C++ program*/

/*A member can be declare or defined inside the class, this member functions can be accessed by any member function present in this program*/

/*Syntax to DECLARE A CLASS MEMBER FUNCTION

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

	DataType memeberfunction() ;

} ;

*/

/*Note : In this case class member function is only declared and it is not defined. To define a function for this class member function SCOPE RESOLUTION OPERATOR ( :: ) is used*/

/*syntax to access class member using SCOPE RESOLUTION OPERATOR

DataType Class_Name :: Member function()

{

	Function definition / statement / code ;

}

*/ 

/*Syntax to DEFINE A CLASS MEMBER FUNCTION

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

	DataType Class_Name :: Member function()

	{

		Function definition / statement / code ;

	}

} ;

*/
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