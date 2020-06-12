/*In this lets see about POLYMORPHISM concept in C++ Program.*/

/*Polymorphism is refers to many form , thus "POLY = Many " and "MORPHISM = FORM " */

/*Polymorphism occurs when there is hierarchy of class by mean of Inheritance.*/

/*including preprocessor / headerfile  in the program*/

#include <iostream>

#include <string>

/*using namespace*/

using namespace std ;

/*Creating a class called Animal .*/

class Animal {    

    public:    

	void animal()

	{      

	cout << "\nANIMAL which is a PARENT Class..." << endl ;      
	
	}        

};     

/*derived class of Animal*/

class Lion : public Animal      

{      

   public:    

	void animal()      
   
	{           

	cout << "\nLION which is the FIRST DERIVED class from the PARENT Class ANIMAL..." << endl ;      
    	
	}      

};

/*derived class of Animal*/

class Dog : public Animal      

{      

   public:    

	void animal()      
   
	{           

	cout << "\nDOG which is the SECOND DERIVED class from the PARENT Class ANIMAL..." << endl ;      
    	
	}      

};

/*derived class of Animal*/

class Cat : public Animal      

{      

   public:    

	void animal()      
   
	{           

	cout << "\nCAT which is the THRID DERIVED class from the PARENT Class ANIMAL... " << endl ;      
    	
	}      

};
    
int main( ) 

{

Animal a = Animal( ) ;

a.animal( ) ;

Lion l = Lion( ) ;

l.animal( );

Dog d = Dog( ) ;

d.animal( );

Cat c = Cat( ) ;

c.animal( );

}

    
      