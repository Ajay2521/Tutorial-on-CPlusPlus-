/*In this lets see about FILES concept in C++ Program.*/

/*we use "iostream" standard library for cin , cout , cerr etc..*/

/*Likewise we use "fstream " standard library for reading and writing into file by using three different data types

1) ofstream - This data type represent the output file stream and which is used to create a file and to write the data into the file.

2) ifstream - This data type represent the input file stream and which is used to read the data from the file.

3) fstream - This data type represent the file stream and which is used to create a file , to write the data into the file and read the data from the file. 

*/

/*To perform file processing in C++ header files <iostream> and <fstream> must be included in the program.*/

/*file must be opened before working with it.*/

/*syntax to OPEN a file

void open( const char *filename , ios :: openmode mode );

*/

/*Note : to open a file we need to mention is mode of opening , some majorly used mode type is 

1) ios :: app = Append mode , which is used to append the data .That is all output to that file will be appended to end of the file.

2) ios :: ate = which is used to open a file for output and move the read or write control to the end of the file.

3) ios :: in = Read mode, which is used to open the file for reading purpose only.

4) ios :: out = Write mode , which is used to open the file for writing purpose only .

5) ios :: trunc = If the file is already exists , then all it content will be deleted (truncated) before opening the file for working in it.

*/

/*The file which has been opened before must be closed at any case after the work has been done.*/

/*C++ program will also terminate is automically but its is good to close all files before program terminated.*/

/*Syntax for CLOSE is

void close( );

*/

/*In this program lets see how to OPEN and READ the datas from the file.*/  

/*reading from a file is just similar as reading from the screen using ( >> ) extraction operartion , but the only difference is ifstream or fstream has been used instead of "cint".*/

/*including preprocessor / headerfile  in the program*/

#include <iostream>

#include <string>

/*including fstream headerfile in the program for working with files.*/

#include <fstream>

/*using namespace*/

using namespace std ;

/*main( ) function of the program */

int main( )

{

string Name ;

int RollNo ;

int MobileNo ;

/*using ifstream to opening file in read only mode.*/

ifstream readfile ;

readfile.open( "ReadFile.txt" ) ;

cout << "\nReading from the file \"ReadFile.txt\"..... " << endl ;

/*Reading the Name from the file.*/

readfile >> Name ;

/*writing the Name to the screen.*/

cout << "\nThe Student Name is : " << Name << endl ;

/*Reading the RollNo from the file.*/

readfile >> RollNo ;

/*writing the RollNo to the screen.*/

cout << "\nThe Student RollNo is : " << RollNo << endl ;

/*Reading the MobileNo from the file.*/

readfile >> MobileNo ;

/*writing the Mobile to the screen.*/

cout << "\nThe Student MobileNo is : " << MobileNo << endl ;

/*Closing the opened file.*/

readfile.close( ) ;

}
 
  