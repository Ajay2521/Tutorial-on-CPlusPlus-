/*In this lets see about INHERITANCE in C++ Program.*/

/*The most important features of OOPs is INHERITANCE.*/

/*Inheritance make easy to create and maintain an application.*/

/*Inheritance are mainly used for Code Reuseability and fast implementation of time*/

/*The process of using the data member of a class which is already created is called INHERITANCE.*/

/*That is an existing class in a program is called as BASE class / PARENT class*/

/*The class whic is drived from existing class in a program is called as DERIVED class / CHILD class*/ 

/*Inheritance is simple considereed as a "is a " relationship .*/

/*synatx for creating a derived class from base class is 

class_name derived_class_name : access_specifier base_class_name

{

        access_specifier:

	DataType member1 ;

	DataType member ;

	DataType member3 ;

	.
	.
	.
	
	DataType memberN ;

};

*/

/*including preprocessor / headerfile  in the program*/

#include <iostream>

#include <string>

/*using namespace*/

using namespace std ;

/*creating the BASE class of the function.*/

class Student

{

      public:

	string Name;

	int RollNo;

};

/*Creating a DERIVED class from the BASE Class of the function.*/

class AccessStudent : public Student

{

         public :

	void getStudent();

	void printStudent();

};


void AccessStudent :: getStudent()

{

	cout << "\nEnter Student Name : ";

	cin >> Name ;

	cout << "\nEnter Student RollNo : ";

	cin >> RollNo ;

}

void AccessStudent :: printStudent()

{

	cout<< "\nStudent Name is : " << Name << endl ;

	cout<< "\nStudent RollNo is : " << RollNo << endl ;

}

/*Main funtion of the program.*/

int main()

{

AccessStudent student1 ;

AccessStudent student2 ;

cout<<"\nEnter the Details of First Student....."<< endl ;

student1.getStudent();

cout<<"\nEnter the Details of Second Student....."<< endl ;

student2.getStudent();

cout<<"\nPrinting the Details of First Student....."<< endl ;

student1.printStudent();

cout<<"\nPrinting the Details of Second Student....."<< endl ;

student2.printStudent();

}