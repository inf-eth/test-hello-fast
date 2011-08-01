#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
	// The system command can be used in windows or linux to access shell (DOS for windows or BASH etc for linux). 
	// It tries to run an executible called out.o.
	system("./out.o");
	
	return 0;
}
