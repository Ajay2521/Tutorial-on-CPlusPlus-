/*In this lets see about "this pointer" concept in C++ Program.*/

/*this is a pointer function which is used to by every object to access its own address.*/

/*this pointer is an implict parameter to all member function.*/

/*That is all member function can able to access there object by using this pointer.*/

/*Note : Friend function can't be able to access this pointer since Friend function is not a member function of the class.*/

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

student1.PrintStudent ( ) ;

student2.PrintStudent ( ) ;

}