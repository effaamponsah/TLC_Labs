#include <iostream>

void printMatrix ( int arr[][2] ) { 
	for ( int i=0; i<=1; ++i ) {
		for ( int j=0; j<=1; ++j ) {
			std::cout << arr[i][j] << " ";
		} 
	}


} 

int main () {
	int arr[] { 3,2,1,4 };
	std::cout << &arr[0] <<std::endl; 

	*(arr + 1) = 3;

	std::cout << arr[1] << std::endl;
	

	int multiDimension[2][2] { 1,2,3,4 }; 
	
	printMatrix( multiDimension );	


}
