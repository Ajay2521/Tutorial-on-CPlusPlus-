/*The C++ standard library does not provide a proper date type*/

/*To access date and time related functions and structures, then we need to include <ctime> header file in your C++ program.*/

/*including preprocessor / headerfile  in the program*/

#include <iostream>

#include <ctime>

/*using namespace*/

using namespace std ;

int main( )

{

/*current date and time based on system time and date.*/

time_t timeNow = time(0);

/* convert timeNow to string form to make it to be printed*/

char* datetime = ctime(&timeNow);

cout << "\nThe local date and time is : " << datetime << endl;

/* convert timeNow to tm struct for UTC ( Universal Time )*/

tm *gmtm = gmtime(&timeNow);

datetime = asctime(gmtm);

cout << "\nThe UTC date and time is:"<< datetime << endl;

}