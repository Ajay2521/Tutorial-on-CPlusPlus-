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

/*Lets now see about PROTECTED MEMBER in this Program.*/

/*PROTECTED member variable or function is similar to PRIVATE member but the major difference is that PROTECTED member can be accessed by using the CHILD class which is a DERIVED class of an MAIN class or PARENT class of a program.*/

/*NOTE : No worries about this  CHILD class / DERIVED class , PARENT class / MAIN class later on this concepts will be explained in INHERITANCE.*/
 
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

	void PrintStudent(); 
	
     protected :

	int MobileNo;

};

/*CHILD CLASS which is derived from MAIN CLASS "Student"*/

class Mobileno : Student 

{

	public :	

	//Declaring a CHILD class memeber function which is used to access and return the PROTECTED MEMBER OF A CLASS.
	
	int printMobile( void ) ;

	//Declaring a CHILD class memeber function which is used to assign and access the PROTECTED MEMBER OF A CLASS. 

	void getMobileNo ( int Mobile );

};

/*Definig the CHILD class member function to return the private member */

int Mobileno :: printMobile( void )

{

return MobileNo ;

}

/*Definig the CHILD class member function to access the private member */

void Mobileno :: getMobileNo ( int Mobile )

{

	MobileNo = Mobile ;

}

/*Defining the MAIN class member function*/

void Student :: PrintStudent() 

{

cout<<"\nThe student Name is : " << Name << endl ;

cout<<"\nThe student RollNo is : " << RollNo << endl ;

}

/*creating a main() function of the program*/

int main()

{

/*creating Object called student1 and student2 for the class Student*/

Student student1;

Student student2;

Mobileno studentmobile1 ;

Mobileno studentmobile2 ;

student1.Name = "Maayon" ;

student1.RollNo = 1001001 ;

studentmobile1.getMobileNo ( 1010101010 ) ;

student2.Name = "Tech Guru" ;

student2.RollNo = 1011011 ;

studentmobile2.getMobileNo ( 1212121212 ) ;

student1.PrintStudent ( ) ;

cout<<"\nThe student MobileNo is : " << studentmobile1.printMobile() << endl ;

student2.PrintStudent ( ) ;

cout<<"\nThe student MobileNo is : " << studentmobile2.printMobile() << endl ;

}