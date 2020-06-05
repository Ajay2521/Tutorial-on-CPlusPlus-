/*In this program we will be seeing Decision Making Statements*/

/*In C++ if, if else, if else if, nested if , switch and nested Switch are know as Decision Making Statements , which is used to make decision based up on the condition , and the statement is executed based on a condition.*/

/*In this Example lets see how SWITCH Statement works in a program.*/

/*Switch contains a expression , if the expression meets any equality with the case, then the code / statement / block inside that case will be executed and remaining cases will be ignored by the compiler.*/

/*Note : switch can have any number of case in it.*/
 
/*Syntax of Switch statement

switch(expression){

	case constant-expression1 :

	statement(s);

	break; 

	case constant-expression2 :

	statement(s);

	break; 
	.
	.
	.
	default :

	statement(s);

}

*/

/*It is optional to have 'break statement' at end of each case, but it is good pratice to have 'break statement' at end of each case, since it breaks the remaining cases and only execute needed case which is equal to the user choise.*/

/*When no cases statisfy the condition ,then default case will be executed by default.*/

/*including preprocessor / header file in the program*/

#include <iostream>

/*using namespace*/

using namespace std ;

/*creating a main() function of the program*/

int main()

{

/* local variable definition */

int choise = 2 ;

/*when the switch case meets the condition, then that case will be executed*/

/*In this when case is equal to choise then than case will be executed*/

/*In this I have designed to execute normal cases*/

cout<<"\nLets see now normal cases in switch...." << endl ;

switch(choise)
{

case 1 :

           cout<<"\nCase 1 is Executed ,Since Choise is 1." << endl ;

           break ; 


case 2 :

           cout<<"\nCase 2 is Executed ,Since Choise is 2." << endl ;

           break ;

case 3 :

           cout<<"\nCase 3 is Executed ,Since Choise is 3." << endl ;

           break ;

case 4 :

           cout<<"\nCase 4 is Executed ,Since Choise is 4." << endl ;

           break ;

default :

           cout<<"\nSince no Case is met with Choise ,Therefore default case is Executed." << endl ;

           break ;

}

/* Redefining local variable */

choise = 5 ;

/*when the switch case meets the condition, then that case will be executed*/

/*In this when case is equal to choise, then than case will be executed*/

/*In this I have designed to execute defalut case*/

cout<<"\nLets see now DEFAULT Case in switch...." << endl ;

switch(choise)

{

case 1 :

           cout<<"\nCase 1 is Executed ,Since Choise is 1." << endl ;

           break ; 


case 2 :

           cout<<"\nCase 2 is Executed ,Since Choise is 2." << endl ;

           break ;

case 3 :

           cout<<"\nCase 3 is Executed ,Since Choise is 3." << endl ;

           break ;

case 4 :

           cout<<"\nCase 4 is Executed ,Since Choise is 4." << endl ;

           break ;

default :

           cout<<"\nSince no Case is met with Choise ,Therefore default case is Executed." << endl ;

           break ;

}

}