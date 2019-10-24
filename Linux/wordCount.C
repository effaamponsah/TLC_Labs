#include <iostream> 
#include <unistd.h>
#define BUFFSIZE 1024

using namespace std;


int main() {

	char buffer[BUFFSIZE];
	ssize_t length;

	int count {1};
	
	while( (length = read ( 0, buffer, BUFFSIZE) ) > 0 ) {
//		write(1, buffer, length);
		cout << length <<endl;	
//		for( auto i : buffer) {
			cout << buffer << " ";
//		}
	}
}
