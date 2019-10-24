#include <iostream>
#include <vector>
#include <chrono>
#include <ctime>
#include <iomanip>
using namespace std;

struct Date {
	int year,month,day;
};


int main(){
	Date myBirthday{};
	myBirthday.year = 1995;
	myBirthday.month = 6;
	myBirthday.day = 9;
	
	
	
	Date mumsBirthday{};
	mumsBirthday.year = 2019;
	mumsBirthday.month = 12;
	mumsBirthday.day = 2;	

	Date dadsBirthday{};
	dadsBirthday.year = 1990;
	dadsBirthday.month = 12;
	dadsBirthday.day = 1;


	if(mumsBirthday.year>dadsBirthday.year && mumsBirthday.month>dadsBirthday.month && mumsBirthday.day > dadsBirthday.day)
	   cout << "Mums \n";
	else
	   cout <<"Dads \n";
	
	Date d1 {};
	d1.year = 2019;
	d1.month = 12;
        d1.day = 2;

	Date d2 {};
	d2.year = 2018;
	d2.month = 10;
	d2.day = 2;

	Date d3 {};
	d3.year = 2010;
	d3.month = 5;
	d3.day = 9;
	
	vector<Date> threedates {
		d1,d2,d3
	};

	cout << threedates[1].year;
	threedates[1].year = 1984;
	threedates[2].month = 2;
	threedates[3].day = 28;

        chrono::system_clock::time_point now=chrono::system_clock::now();		time_t current_time = chrono::system_clock::to_time_t(now);
	cout <<"The time is "<<put_time(localtime(&current_time),"%F %T")<<"\n";

}
