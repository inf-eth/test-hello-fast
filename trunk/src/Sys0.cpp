#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
	// The system command can be used in windows or linux to access shell (DOS for windows or BASH etc for linux). 
	// It tries to run an executible called out.o assuming linux shell.
	system("./out.o");			// Won't run on windows.
	system("dir");				// Display directory contents in windows.
	system("ls -la");			// Display directory contents in linux.

	cout << "Hello world" << endl;
	return 0;
}
