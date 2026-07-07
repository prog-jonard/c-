#include <iostream>
using namespace std;

int main(){
	int year;
	
	cout << "Enter a Year: ";
	cin >> year;
	
	if (year % 4 != 0){
		cout << "It is a common year.";
	}else if(year % 100 != 0){
		cout << "It is a leap year.";
	}else if (year % 400 != 0){
		cout << "It is a common year.";
	}else{
		cout << "It is a leap year.";
	}
	
	return 0;
}