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

/*In this lets see about FRIEND FUNCTION in c++ Program.*/

/*Friend function of a class is defined outside that class but it can able to access all the access modifiers like private and protected members of a class .*/

/*NOTE : FRIEND FUNCTION is not a Member Function of a class*/

/*Syntax for friend function is 

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

	friend DataType Function_Name ( Parameter_List );

} ;

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

	//Declaring a class memeber function which is used to assign and access the PRIVATE MEMBER OF A CLASS. 

	void getMobileNo ( int Mobile );

	friend void PrintStudent( Student student); 

     private :

	int MobileNo;

};

/*Definig the class member function to access the private member */

void Student :: getMobileNo ( int Mobile )

{

	MobileNo = Mobile ;

}

/*Since Friendly function is not a Member function is can be define like a Normal Function*/

void PrintStudent( Student student ) 

{

cout<<"\nThe student Name is : " << student.Name << endl ;

cout<<"\nThe student RollNo is : " << student.RollNo << endl ;

cout<<"\nThe student MobileNo is : " << student.MobileNo << endl ;

}

/*creating a main() function of the program*/

int main()

{

/*creating Object called student1 and student2 for the class Student*/

Student student1;

Student student2;

student1.Name = "Maayon" ;

student1.RollNo = 1001001 ;

student1.getMobileNo ( 1010101010 ) ;

student2.Name = "Tech Guru" ;

student2.RollNo = 1011011 ;

student2.getMobileNo ( 1212121212 ) ;

PrintStudent ( student1 ) ;

PrintStudent ( student2 ) ;

}