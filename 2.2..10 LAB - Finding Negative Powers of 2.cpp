#include <iostream>
using namespace std;

int main(){
	double result = 1, newresult;
	int times;
	
	cout << "Enter the exponent for 2: ";
	cin >> times;
	
	while (times >= 64){
		cout << "Max Reached. Invalid Number. Try Again";
		cin >> times;
	}
	
	for (int i = 0; i < times; i++){
		result /= 2.0;
	}
	
	cout.precision(20);
	cout << result;
	
	return 0;
}