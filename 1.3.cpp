#include <iostream>
using namespace std;

int main(){
	float pi = 3.14159265359;
	float x, y; 
	
	double pi2 = 3.14159265359 * 3.14159265359;
	
	cout << "Enter Value for x: ";
	cin >> x;
	float x2 = x * x;
	
	y = (x2 / (pi2 * (x2 + 1.0/2.0))) * (1.0 + x2 / (pi2 * ((x2 - 1.0/2.0) * (x2 - 1.0/2.0))) );
	
	cout << "Y = " << y;
	
	return 0;
}