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
 
/*In this program lets see a simple class used in C++ Programming*/

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

};

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

cout<<"\nDetails of Student 1 is.....\n\n" ;

cout<<"\nThe student Name is : " << student1.Name << endl ;

cout<<"\nThe student RollNo is : " << student1.RollNo << endl ;

cout<<"\nThe student MobileNo is : " << student1.MobileNo << endl << endl;

cout<<"\nDetails of Student 2 is.....\n\n" ;

cout<<"\nThe student Name is : " << student2.Name << endl ;

cout<<"\nThe student RollNo is : " << student2.RollNo << endl ;

cout<<"\nThe student MobileNo is : " << student2.MobileNo << endl ;

}