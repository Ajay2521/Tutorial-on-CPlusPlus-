/*In this program we will be seeing all the Relational Operators like equal , unequal, lesser than , lesser than or equal to , greater than , greater than or equal to etc.. avaliable in C++ Program*/

/*including preprocessor in the program*/

#include <iostream>

/*using namespace*/

using namespace std;

/*creating a main() function of the program*/

int main()

{

/*Declearing Variable 'a=10' Variable 'b=20' and creating a Variable 'c' with no initial value declear*/ 

int a = 10;

int b = 20;

int c ;

/*Here I have used a  concept of if and if-else , Don't worry about it , i will be covering in the if and if else concept later on*/

/* Now checking for EQUAL TO condition that if a and b contains an equal or same value then it pass the condition else it will not pass the condition*/ 

if( a == b )

{

	cout<<"\nA is equal to B and EQUAL TO condition is Passed." <<endl ;

}

else

{

	cout<<"\nA is not equal to B and EQUAL TO condition is Not-Passed."<<endl ;

}

/* Now checking for NOT EQUAL TO condition that if a and b contains an non equal or different value then it pass the condition else it will not pass the condition*/ 

if( a != b )

{

	cout<<"\nA is not equal to B and NOT EQUAL TO condition is Passed."<<endl ;

}

else

{

	cout<<"\nA is equal to B and NOT EQUAL TO condition is Not-Passed."<<endl;

}

/* Now checking for LESSER THAN condtion that if 'a' contains  a value lesser then 'b' then it pass the condition else it will not pass the condition*/ 

if ( a < b )

{

	cout<<"\nA is less than B and LESSER THAN condition is Passed."<<endl ;

}

else

{

	cout<<"\nA is not less than B and LESSER THAN condition is Not-Passed."<<endl ;

}

/* Now checking for GREATER THAN condtion that if 'a' contains  a value greater then 'b' then it pass the condition else it will not pass the condition*/ 

if ( a > b )

{

	cout<<"\nA is greater than B and GREATER THAN condition is Passed."<<endl ;

}

else

{

	cout<<"\nA is not greater than B and GREATER THAN condition is Not-Passed."<<endl ;

}

/* Now checking for LESSER THAN or EQUAL TO condtion that if 'a' contains  a value lesser then 'b'  or Equal to the value of 'b' then it pass the condition else it will not pass the condition*/ 

if ( a <= b )

{

	cout<<"\nA is either less than or equal to B and LESSER THAN or EQUAL TO condition is Passed."<<endl ;

}

else

{

	cout<<"\nA is either Not less than or Not equal to B and LESSER THAN or EQUAL TO condition is Not-Passed."<<endl ;

}

/* Now checking for GREATER THAN or EQUAL TO condtion that if 'a' contains  a value greater then 'b' or Equal to the value of 'b'  then it pass the condition else it will not pass the condition*/ 

if ( a >= b )

{

	cout<<"\nA is either greater than or equal to B and GREATER THAN or EQUAL TO condition is Passed."<<endl ;

}

else

{

	cout<<"\nA is either Not great than or Not equal to B and GREATER THAN or EQUAL TO condition is Not-Passed."<<endl ;

}

}