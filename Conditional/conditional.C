#include <iostream>

using namespace std;
 
struct Date
{
	int year, month, day;

};

int main() {
	cout << "Hello world" <<endl;
 	Date now{};
	now.year = 2019;
	now.month = 10;
	now.day = 18;

	Date your_date{};
	cout <<"Enter your year :  ";
	cin >> your_date.year;
	cout << endl;
	
	cout << "Enter your month :  ";
	cin >> your_date.month;
	cout <<endl;

	cout << "Enter your day :  ";
	cin >> your_date.day;
	cout <<endl;

	
	cout << now.year <<endl;


	if(now.year > your_date.year && now.month > your_date.month && now.day > your_date.day) {
		cout << "Your time is before the current date "<<endl;
	}
	else {
		cout << "Your time is after the current date "<< endl;  
	}

	

}
