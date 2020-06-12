/*In this lets see the concept of OVERLOADING in C++ Program.*/

/*The process of define a more than one specification for a function which have same function name or operation is called FUNCTION OVERLOADING or OPERATOR OVERLOADING.*/

/*In simple Overloading is that when two function have same name in a program but the differs in the mean of ARGUMENT passed and Function definition is called OVERLOADING.*/

/*When this overloaded program is complier the complier while execute the overloaded function based on the number of arguent based or type of argument based to the function.*/

/*Thus the process of executing the most appropriate overloaded function based on differ in argument is called as OVERLOAD RESOLUTION.*/

/*Okay, In this lets see about OPERATORS OVERLOADING in C++ Program.*/

/*Operator overloading is also known as complie time polymorphism in which opertors are overloaded to provide a special meaning to the user defined data type.*/

/*Operators overloading is used to perform different operations on the same operand.*/

/*Operator overloading can be performed in all the operators which is avaliable in C++ program like Binary operators, arthimetic operators, relational operators etc...*/

/*Note : Operator Overloading is not permited in some operands like

1) Scope Operator ( :: )

2) Sizeof

3)Member selector ( . )

4) Member pointer selector ( * )

5) ternary operator ( ? : )

*/

/*syntax for Opertor Overloading is 

return_type class_name  : : operator op(argument_list)  

{  

     // body of the function.  

}  

*/

/*including preprocessor / headerfile  in the program*/

#include <iostream>

#include <string>

/*using namespace*/

using namespace std ;

class Operator    

{    
     
	int num;    
   public:    
       
	Operator() : num( 10 ){}    
     
	void operator ++()         
	
	{     
          
	num = num+2;     
      
	 }    
       
	void Print() 

	{     
           
	cout<<"\nThe Count is: "<< num << endl ;     
       
	}    

};    

/*main function of the program*/

int main()    

{    

Operator Oper1;
    
++Oper1;  // calling of a function "void operator ++()"    
    
Oper1.Print();    
        
}    