/*In this lets see about DATA ABSTRACTION concept in C++ Program.*/

/*Data Abstraction is the process of hiding the uncessary data or information from user access and only displaying the needed data or information for user access and contorl.*/

/*In simple the user have access only to the interface which is needed.*/

/*And user don't have access to the implemation of it.*/

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