#include <iostream>
using namespace std;

int main(){
	unsigned long long times, result = 1;
	
	cout << "Enter the exponent for 2: ";
	cin >> times;
	
	if (times == 0){
		cout << "1" << endl;
	} 
	
	if (times >= 64){
		cout << "Max Reached. Invalid Number. Try Again";
		cin >> times;
	} 
	
	for (int i = 0; i < times; i++){
		result = 2 * result;	
	}
	
	cout << result;
	
	return 0;
}