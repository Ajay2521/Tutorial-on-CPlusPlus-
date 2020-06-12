/*In this lets see about Static Member in class concept in C++ Program.*/

/*When a member of a class is declareed as static then no matter how many objects of the class are created, there will be only one copy of the static member*/

/*All static data is initialized to zero when first object is created, if no other initialization is present.*/ 

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

	/*Declaring a stattic member of a class*/

	static int ObjCount;

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
		
		/*Incrementing ObjCount everytime when a object is created.*/

		ObjCount++ ;
	
	}

};

/*Initializing static  membeer of a class*/

int Student :: ObjCount = 0;

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

/* Print total number of objects  which is created using the class.*/

cout << "\n\nTotal Number of objects  which is created from a class Student is: " << Student :: ObjCount << endl;

}