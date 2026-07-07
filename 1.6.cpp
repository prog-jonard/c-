#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	float v1= 2.3;
	float v2 = 2.3;
	float v3 = 2.123456;
	float v4 = 2.123456;
	float v5 = 2.123456;
	
	cout << setprecision(2) << v1 << endl;
	cout << setprecision(2) << fixed <<  v2 << endl;
	cout << setprecision(6) << v3 << endl;
	cout << setprecision(2) << v4 << endl;
	cout << setprecision(0) << v5 << endl;
	
	
	
	
	return 0;
}