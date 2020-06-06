/*In this program we will be seeing about ARRAY in C++ Program*/

/*Array in a C++ Program is a kind of data type which is an user Defined data type, which is used to store a Collection of data which have same data type.*/

/*ADVANTAGE OF ARRAY : When used need to store many values of same data type, he/she can't ale to declear so many Varaile, instead of that he/she can Create an simple Array to store many datas of similar Data Type. */

/*DISADVANTAGE : Storeing datas of different data type is not possible in array*/

/*IN THIS LET SEE A COMPLETE ARRAY TO POINTER CONCEPT*/

/*Syntax to Pass an Array to Pointer is

DataType *PointerVariable;

DataType ArrayVariable[];

PointerVariable = ArrayVariable;

*/

/*Array element can be accessed by using the Array index value , thus array's are stored using index , Usually Array index starts with ZERO.*/

/*It is legal to access pointer array by *PointerVariable or by *(PointerVariable + i ) , i donates the index of the Pointer Variable.*/

/*It is legal to access ArrayVariable by ArrayVariable or by (ArrayVariable + i ) , i donates the index of the Array Variable.*/
 
/*including preprocessor / headerfile  in the program*/

#include <iostream>

/*using namespace*/

using namespace std ;

/*creating a main() function of the program*/

int main()

{

/*Declaring an array of A*/

int arrA[] ={ 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9} ;

/*Declaring an Pointer Variable */

int *ptr ;

/*assinging an Array to a Pointer*/

ptr = arrA;
 
/*printing a data's present in an Pointer Variable *ptr */

cout<< "\nPrinting Array value using by Passing it to a Pointer Variable..."<< endl << endl ;

for ( int i = 0 ; i < 9 ; i++)

{

		cout<<"\nThe Value of *(ptr + " << i << " ) :  " << *( ptr + i ) << endl ;

}  

cout<<"\nPrinting Array value using Array Variable..."<< endl << endl ;

for ( int i = 0 ; i < 9 ; i++)

{

		cout<<"\nThe Value of arrA [ " << i << " ] :  " <<  arrA [ i ] << endl ;

}  

cout<<"\nPrinting Array value using Array Variable as Address..."<< endl << endl ;

for ( int i = 0 ; i < 9 ; i++)

{

		cout<<"\nThe Value of *(arrA + " << i << " ) :  " <<  *(arrA + i ) << endl ;

}  

}