/*In this lets see about pointer in class concept in C++ Program.*/

/*pointer to a c++ class is as same as the conceptof pointer to a Structure.*/

/*to access member of a pointer to a class member access operator -> has used*/

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
		
	// Defining a constructor with an Parameter in this pointer
	
	Student ( string Name ,  int RollNo , int MobileNo ) 

	{

		this->Name = Name ;

		this->RollNo = RollNo ;

		this->MobileNo = MobileNo ;

	}

};

/*Defining a member function.*/

void Student :: PrintStudent() 

{

cout<<"\nThe student Name is : " << Name << endl ;

cout<<"\nThe student RollNo is : " << RollNo << endl ;

cout<<"\nThe student MobileNo is : " << MobileNo << endl ;

}
		
/*creating a main() function of the program*/

int main( void )

{

/*creating Object called student1 and student2 for the class Student*/

Student student1 = Student ( "Maayon" , 1001001 , 1010101010 ) ;

Student student2 = Student ( "Tech Guru", 1011011 , 1212121212 ) ;

/*Declaring a pointer variable to access the class*/

Student *ptrStudent ;

/*assigning the object to the pointer variable.*/

ptrStudent = &student1;

/*Accessing the member function of a class using pointer variable with the help of member access operator*/

ptrStudent->PrintStudent ( ) ;

/*assigning the object to the pointer variable.*/

ptrStudent = &student2;

/*Accessing the member function of a class using pointer variable with the help of member access operator*/

ptrStudent->PrintStudent ( ) ;

}