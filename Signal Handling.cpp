/*In this program lets see about SIGNAL HANDLING in C++ Program. */

/*Signals are the interrupts delivered to a process by the operating system which can able to terminate a program prematurely . Usually Interrupts are generate by using the keyboard shortcut " Ctrl + c " . */
 
/*only few signals can able to caught by using C++ Program , this signals are defined in a header file called <csignals>. They are

1) SIGABRT - Abnormal termination of the program which is aborting the program .

2) SIGFPE - An error in arithmetic operation like overflow etc.. 

3) SIGILL - Detection of an illegal instruction .

4) SIGINT - Receipt of an interactive attention signal .

5) SIGSEGV - An invalid access to storage .

6) SIGTERM - A termination request sent to the program.

*/

/*C++ provide function signal ( ) which is used to trap unexpected events .*/

/*syntax  for signal ( ) is

void ( *signal ( int sig, void ( *func )( int ) ) ) ( int ) ;

//First argument as an integer which represents signal number .

//Second argument as a pointer to the signal handling function .

*/

/*including preprocessor / headerfile  in the program*/

#include <iostream>

#include <csignal>

#include <Windows.h>

/*using namespace */

using namespace std;

void signalHandler( int signum )

{

cout << "\nInterrupt signal (" << signum << ") received SUCCESSFULLY.....\n" ;

/* cleaning up and terminateing the program . */

exit(signum);

}

/*main( ) of the program.*/
 
int main ()

{

/* registering signal SIGINT and signal handler in signal( ) */

signal(SIGINT, signalHandler);

while(1)

{

cout << "\nGoing to sleep...." << endl;

Sleep( 10 ) ;

}

}