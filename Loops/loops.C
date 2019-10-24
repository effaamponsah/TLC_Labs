#include <iostream>
#include <vector>

using namespace std; 

struct Date{
  int year;
  int month;
  int day;

};

void niceDate(Date date){
	std::string postfix;
	if( date.day == 11 || date.day == 12 || date.day == 13) { postfix = "th"; }
	else if ( date.day == 1 || date.day == 21 || date.day == 31 ) { postfix = "st"; }
	else if ( date.day == 2 || date.day == 22 ) { postfix = "nd"; }
	else if ( date.day == 3 || date.day == 23 ) { postfix = "rd"; }
	else { postfix = "th";}
	
	switch( date.month){
		case 1:
			std::cout << date.day << postfix << " January " << date.year << std::endl;
			break;
		case 2:
			std::cout << date.day << postfix << " Febuary " << date.year << std::endl;
			break;
		case 3:
			std::cout << date.day << postfix << " March " << date.year << std::endl;
			break;
		case 4 :
			std::cout << date.day << postfix << " April " << date.year << std::endl;
			break;
		case 5:
			std::cout << date.day << postfix << " May " << date.year << std::endl;
			break;
		case 6:
			std::cout << date.day << postfix << " June " << date.year << std::endl;
			break;
		case 7:
			std::cout << date.day << postfix << " July " << date.year << std::endl;
			break;
		case 8:
			std::cout << date.day << postfix << " August " << date.year << std::endl;
			break;
		case 9:
			std::cout << date.day << postfix << " September " << date.year << std::endl;
			break;
		case 10:
			std::cout << date.day << postfix << " October " << date.year << std::endl;
			break;
		case 11:
			std::cout << date.day << postfix << " November " << date.year << std::endl;
			break;
		case 12:
			std::cout << date.day << postfix <<  " December " << date.year << std::endl;
			break;
		default:
			std::cout << "Invalid Month" << std::endl;
	}
}

int main() {

  Date date1 {};
  date1.year = 2019;
  date1.month = 12;
  date1.day = 2;

  Date d2{};
  d2.year = 1994;
  d2.month = 4;
  d2.day = 2;

  Date d3{};
  d3.year = 1863;
  d3.month = 10;
  d3.day = 11;

  vector <Date> threedates = { date1, d2, d3};

  for( auto date : threedates) {
		niceDate(date);
   }
  
  Date earliestDate {};
  earliestDate.year = date1.year;
  earliestDate.month = date1.month;
  earliestDate.day = date1.day;


  for( int i =0; i <= 2; ++i) {
    if(earliestDate.year < threedates[i].year) {
       earliestDate = threedates[i];
     }

  }
  niceDate( earliestDate );

  for( auto date : threedates) { 
        for(int i=0; i <=2; ++i) {
	    niceDate(date);
         }
   }
  
  for ( int i=0; i<=2; ++i) {
     for( auto date: threedates ) {
          niceDate(date);
       }

  }

}
