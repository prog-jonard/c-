#include <iostream>
using namespace std;

int main(){
	int year, a, b, c, d, e, f;
	
	cout << "Input Year: ";
	cin >> year;
	
	a = year % 19;
	b = year % 4;
	c = year % 7;
	d = (a * 19 + 24) % 30;
	e = (2*b + 4*c + 6*d + 5) % 7;
	cout << d + e;
	f = d + e;
	
	if (f < 10){
		cout << "Easter is in " << (d + e + 22) << " day of March.";
	}else{
		cout << "It is on " << (d + e - 9) << " day of April.";
	}
	

	
	return 0;
}