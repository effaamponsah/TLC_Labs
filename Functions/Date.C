#include <iostream>

struct Date {
 
 int year;
 int month;
 int day;

};
Date prettyprint( Date date ){
	
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
		default:
                        std::cout << "Invalid Month" << std::endl;

	}	
}


Date max(Date date1, Date date2) {
	if( date1.year > date2.year && date1.month > date2.month && date1.day > date2.day) {
		return date1;
	}
	else {
		return date2;
	}
}


void swap( Date *d1, Date *d2 ) {
	Date temp {*d1};
	*d1 = *d2;
	*d2 = temp;

}

Date nextyear( Date *d1 ) {
	d1.year = 2015;
	return *d1;

}

void getDate() {


}
