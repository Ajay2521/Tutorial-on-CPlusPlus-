/*In this program we will be seeing about STRUCTURE in C++ Program*/

/*Structure in C++ Programming is also know as a user defined Data type which is similar to array.*/

/*In Array we can able to store many data of a same data type*/

/*In Structure we can able to store many data of various data type*/

/*Structure can be accessed using member access operator ( . ) which is also called as DOT operator*/
 
/*In this program lets see a structure to Function in C++ Programming*/

/*Synatx to define a structure in c++ programming

struct [structure tag]

{

	member definition;

	member definition;
	
	...

	member definition;

} [one or more structure variables];

*/

/*including preprocessor / headerfile  in the program*/

#include <iostream>

#include <string>

/*using namespace*/

using namespace std ;

/*creating a structure of the program*/

struct Student

{
	
	string Name;

	int RollNo;

	int MobileNo;

};

/* function declaration */

void printStudent( struct Student student ) ;

/*creating a main() function of the program*/

int main()

{

struct Student student1;

struct Student student2;

student1.Name = "Maayon" ;

student1.RollNo = 1001001 ;

student1.MobileNo = 1010101010 ;

student2.Name = "Tech Guru" ;

student2.RollNo = 1011011 ;

student2.MobileNo = 1212121212 ;

printStudent ( student1 ) ;

printStudent ( student2 ) ;

}

void printStudent( struct Student student )

{

cout<<"\nThe student Name is : " << student.Name << endl ;

cout<<"\nThe student RollNo is : " << student.RollNo << endl ;

cout<<"\nThe student MobileNo is : " << student.MobileNo << endl ;

}