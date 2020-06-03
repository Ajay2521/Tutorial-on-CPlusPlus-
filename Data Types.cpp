/*c++ as data types like int ,  float, char , double , bool,void etc...*/

/*signed , unsigned , short , long etc are the modifiers used to modify the data types*/

/*sizeof is a predefined function used to find the size of a variable or data type*/

/*Note : sizeof this data types may change for compilers to compliers or computers*/

/*inculding iostream preprocessor*/

#include <iostream>
 
/*using namespace in a program*/

using namespace std ;

/*main function of the program*/

int main()

{

/*In this program I have used '/n' in lot of places , it a special character or excape sequence used for next line , Don't worry this topic will be covered later on */

/*endl is used to insert new line after every line */

/* finding storage size for int*/

cout<<"\nStorage size for int : " << sizeof( int ) <<endl ;

cout<<"\nStorage size for unsigned int : " << sizeof( unsigned int ) <<endl ;

cout<<"\nStorage size for signed int : " << sizeof( signed int ) <<endl ;

cout<<"\nStorage size for short int : " << sizeof( short int ) <<endl ;

cout<<"\nStorage size for unsigned short int : "<< sizeof( unsigned short int ) <<endl ;

cout<<"\nStorage size for signed short int : " << sizeof( signed short int ) <<endl ;

cout<<"\nStorage size for long int : " << sizeof( long int ) <<endl ;

cout<<"\nStorage size for unsigned long int : "<< sizeof( unsigned long int ) <<endl ;

cout<<"\nStorage size for signed long int : " << sizeof( signed long int ) <<endl ;

/* finding storage size for char*/

cout<<"\nStorage size for char : " << sizeof( char ) <<endl ;

cout<<"\nStorage size for unsigned char : " << sizeof( unsigned char ) <<endl ;

cout<<"\nStorage size for signed char : " << sizeof( signed char ) <<endl ;

/* finding storage size for float*/

cout<<"\nStorage size for float : "<< sizeof( float ) << endl ;

/* finding storage size for double*/

cout<<"\nStorage size for double : " << sizeof( double ) << endl ;

/* finding storage size for long double*/

cout<<"\nStorage size for long double : " << sizeof( long double ) << endl ;

/* finding storage size for bool*/

cout<<"\nStorage size for bool : " << sizeof( bool ) << endl ;

/* finding storage size for wchar_t */

cout<<"\nStorage size for wchar_t : " << sizeof( wchar_t ) << endl ; 

}