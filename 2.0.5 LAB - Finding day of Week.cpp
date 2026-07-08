#include <iostream>
using namespace std;

int main (){
	int month, day, year;
	
	cout << "Enter Values" << endl;
	cout << "Year: ";
	cin >> year;
	cout << "Month: ";
	cin >> month;
	cout << "Day: ";
	cin >> day;
	
	month -= 2;
	if (month <= 0){
		month += 12;
		year--;
	}
	month = month * 83 / 32;
	month += day;
	month += year;
	month += (year / 4);
	month -= (year/100);
	month += (year / 400);

	cout << month % 7 << endl;
	
	return 0;
}