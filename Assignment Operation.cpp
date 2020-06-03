/*In this program we will be seeing all the Assignment Operators like EQUAL TO, ADD And Assignement Operation , SUB  And Assignement Operation , MULTI  And Assignement Operation , DIVISION  And Assignement Operation , MODULUS  And Assignement Operation , LEFT SHIFT  And Assignement Operation , RIGHT SHIFT  And Assignement Operation , Bitewise AND  And Assignement Operation , Bitewise inclusive OR And Assignement Operation , Bitewise exclusive OR  And Assignement Operation etc... avaliable in C++*/

/*including preprocessor in the program*/

#include <iostream>

/*using namespace*/

using namespace std ;

/*creating a main() function of the program*/

int main()

{

/*Declearing Variable 'a=10' and creating a Variable 'c' with no initial value declear*/ 

int a = 10;

int c ;

/* =(EQUAL TO) Operator Example*/

c = a;  /* which is c = a */

cout<<"\n = Operator Example, Value of c = "<< c << endl ;

/* += ( ADD And Assignement Operation) Operator Example*/

c += a; /* which is c = c + a */

cout<<"\n += ( ADD And Assignement Operation) Operator Example, Value of c = "<< c << endl ;

/* -= ( SUB And Assignement Operation) Operator Example*/

c -= a; /* which is c = c - a */

cout<<"\n -= ( SUB And Assignement Operation) Operator Example, Value of c = "<< c << endl ;

/* *= ( MULTI And Assignement Operation) Operator Example*/

c *= a; /* which is c = c * a */

cout<<"\n *= ( MULTI And Assignement Operation) Operator Example, Value of c = "<< c << endl ;

/* /= ( DIVISION And Assignement Operation) Operator Example*/

c /= a; /* which is c = c / a */

cout<<"\n /= ( DIVISION And Assignement Operation) Operator Example, Value of c "<< c << endl ;

/* %= ( MODULUS And Assignement Operation) Operator Example*/

c = 11; 

c %= a; /* which is c = c % a */

cout<<"\n %%= ( MODULUS And Assignement Operation) Operator Example, Value of c = "<< c << endl ;

/* <<= ( LEFT SHIFT And Assignement Operation) Operator Example*/

c = 10;

c <<= 2; /* which is c = c << 2*/

cout<<"\n <<= ( LEFT SHIFT And Assignement Operation) Operator Example, Value of c = "<< c << endl ;

/* >>= ( RIGHT SHIFT And Assignement Operation) Operator Example*/

c >>= 2; /* which is c = c >> 2 */

cout<<"\n >>= ( RIGHT SHIFT And Assignement Operation) Operator Example, Value of c = "<< c << endl ;

/* &= ( BITWISE AND And Assignement Operation) Operator Example*/

c &= 2; /* which is c = c & 2 */

cout<<"\n &= ( BITWISE AND And Assignement Operation) Operator Example, Value of c = "<< c << endl ;

/* ^= ( BITWISE EXCLUSIVE OR And Assignement Operation) Operator Example*/

c ^= 2; /* which is c = c ^ a */

cout<<"\n ^= ( BITWISE EXCLUSIVE OR And Assignement Operation) Operator Example, Value of c = "<< c << endl ;

/* ^= ( BITWISE INCLUSIVE OR And Assignement Operation) Operator Example*/

c |= 2; /* which is c = c | a */

cout<<"\n |= ( BITWISE INCLUSIVE OR And Assignement Operation) Operator Example, Value of c = "<< c << endl ;

}