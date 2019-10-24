#include <iostream>
#include <Date.H>


int main () { 
	
	Date d1 {};
	d1.year = 2019;
	d1.month = 12;
	d1.day = 9;

	Date d2 {};
	d2.year = 1954;
	d2.month = 2;
	d2.day = 15;

//	prettyprint(d1);

	std:: cout << max( d1, d2).day <<" "<< max( d1, d2 ).month << " " <<max( d1, d2).year <<std::endl;
	
	std:: cout << "Before swap : " << d1.year <<std::endl;
	swap ( &d1, &d2 );


	std:: cout << "After swap : " << d1.year <<std::endl;

	
}
