/*In this program we will be seeing about ARRAY in C++ Program*/

/*Array in a C++ Program is a data type which is an user Defined data type, which is used to store a Collection of data which have same data type.*/

/*ADVANTAGE OF ARRAY : When used need to store many values of same data type, he/she can't ale to declear so many Variables, instead of that he/she can Create an simple Array to store many datas of similar Data Type. */

/*DISADVANTAGE : Storeing datas of different data type is not possible in array*/

/*IN THIS LET SEE A COMPLETE SINGLE DIMENTIONAL ARRAY*/

/*Syntax to Declear a Single Dimentional ARRAY

DataType ArrayName [ ArraySize ] = { ArraryElements }; 

or 

DataType ArrayName [] =  { ArraryElements };

*/

/*Array element can be accessed by using The Array index value , thus array's are stored using index , Usually Array index starts with ZERO.*/
 
/*including preprocessor / headerfile  in the program*/

#include <iostream>

/*using namespace*/

using namespace std ;

/*creating a main() function of the program*/

int main()

{

/*Declearing an array of A by fixed size*/

int arrA[10] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 };

/*Declearing an array of B by not mentioning its size.*/

int arrB[] = { 1 , 2 , 3 , 4 , 5 };

/*printing a data's present in an array A*/

for ( int i = 0 ; i < 10 ; i++)

{

	cout<<"\nThe Value at Array Index of Array A [ " << i <<" ] is : " << arrA[i]  << endl ;

}  

/*printing a data's present in an array B*/

for ( int i = 0 ; i < 5 ; i++)

{

	cout<<"\nThe Value at Array Index of Array B [ " << i <<" ] is : " << arrB[i]  << endl ;

}  

}