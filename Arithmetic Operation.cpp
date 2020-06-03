/*In this program we will be seeing all the Arithmetic Operators like addition , subtraction,multiplication,dividion, modulus etc.. avaliable in C++ program*/

/*including preprocessor in the program*/

#include <iostream>

/*using namespace*/

using namespace std ;

/*creating a main() function of the program*/

int main()

{

/*Declearing Variable 'a=21' Variable 'b=10' and creating a Variable 'c' with no initial value declear*/ 

int a = 21;

int b = 10;

int c ;

/*Addition Operation which is used to add the Value present in the Variable 'a' and 'b' and store the Result in Variable 'c'*/

c = a + b;

cout<<"\nThe Addition of "<<a <<" and " <<b<<" is c = "<<c<<endl ;

/*Subtraction Operation which is used to Subtract the Value from Variable 'a' to 'b' and store the Result in Variable 'c'*/

c = a - b;

cout<<"\nThe Subtarction of "<<a <<" by " <<b<<" is c = "<<c<<endl ;

/*Multiplication Operation which is used to Multiply the Value present in the  Variable 'a' and 'b' and store the Result in Variable 'c'*/

c = a * b;

cout<<"\nThe Multiplication of "<<a <<" and " <<b<<" is c = "<<c<<endl ;

/*Division Operation which is used to Divide the Value from Variable 'a' by 'b' and store the Result in Variable 'c'*/

c = a / b;

cout<<"\nThe Division of "<<a <<" by " <<b<<" is c = "<<c<<endl ;

/*Modulus Operation which is used to give the remainder when it is divided  the Value from Variable 'a' by 'b' and store the Result in Variable 'c'*/

c = a % b;

cout<<"\nThe Modulus of "<<a <<" by " <<b<<" is c = "<<c<<endl ;

/*Increment operator is used to increases the integer value by one.*/

a++;

cout<<"\nThe Increment Value of a is ::: "<<a<<endl ;

/*Decrement operator is used to decreases the integer value by one.*/

a--;

cout<<"\nThe Decrement Value of a is ::: "<<a<<endl ;

}
