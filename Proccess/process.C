#include <iostream>

using namespace std;

int main () {

	int returnHandler;
	returnHandler=setenv("COLOR","BLUE",1);
	if( returnHandler  < 0 ) {
		cout << "COudnt set env" <<endl;
	}
	else { 
		cout << getenv("COLOR") <<endl;
	}
}
