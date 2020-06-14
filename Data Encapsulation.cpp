/*In this lets see about DATA ENCAPSULATION concept in C++ Program.*/

/*Data Encapsulation is the process bundling the function and data together.*/

/*Data Encapsulation is also used for data hiding in c++*/

/*Data Encapsulation and Data Abstraction is similar but differ in means that Data Encapsulation bundling the data and the function , whereas Data Abstraction is a process of exposing only the interface and hiding the implementaion from  the user.*/

/*Any class with public , private access modifier is an example for DATA ENCAPSULATION and Data Abstraction is also and example of DATA ENCAPSULATION.*/

/*including preprocessor / headerfile  in the program*/

#include <iostream>

#include <string>

/*using namespace*/

using namespace std ;

class Adder

{

       public:

	/* constructor of a class*/

	Adder( int i = 0 )

	{

	total = i;

	}

	/* interface to  which is visible to user*/

	void AddNum(int number)

	{

	total += number;

	}

	/* interface to  which is visible to user*/

	int GetTotal()

	{

	return total;
	
	};

       private:
	/* hidden data from user access*/

	int total;

};

/*Main function of the program.*/

int main( )

{

Adder add;

add.AddNum(10);

add.AddNum(20);

add.AddNum(30);

add.AddNum(40);

cout<<"\nTotal value of addition is : " << add.GetTotal( ) << endl ; 

}