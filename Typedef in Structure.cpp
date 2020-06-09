/*In this program we will be seeing about Typedef in C++ Program*/

/*In C++ Program typedef is a keyword which is used to give a type to a new name .That is we can able to assign a data type functionallity to a newly decleared variable/name.*/

/*we can also able to typedef a struct and union as simple as normal typedef*/
 
/*Synatx to define a typedef in c++ programming

typedef DataType NewName;

*/

/*In this program lets see a  Typedef in structure used in C++ Programming*/

/*Synatx to define a typedef in structture in c programming

typedef struct [structure tag]

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

/*creating a typedef structure of the program*/

typedef struct Student

{
	
	string Name;

	int RollNo;

	int MobileNo;

}student;

/*creating a main() function of the program*/

int main()

{

student students;

students.Name = "Maayon" ;

students.RollNo = 1001001 ;

students.MobileNo = 1010101010 ;

cout<<"\nThe student Name is : " << students.Name << endl ;

cout<<"\nThe student RollNo is : " << students.RollNo << endl ;

cout<<"\nThe student MobileNo is : " << students.MobileNo << endl ;

}