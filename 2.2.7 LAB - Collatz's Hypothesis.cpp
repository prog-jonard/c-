#include <iostream>
using namespace std;

int main(){
	int c0;

	cout << "Enter Number: ";
	cin >> c0;
	
	while (c0 <= 0){
		cout << "It must be positive number, try again: \n";
		cout << "Enter Number: ";
		cin >> c0;
	}
	
	int steps = 0;
	do {
		if (c0 % 2 == 0){
			c0 = c0 / 2;
			cout << c0 << endl;
			steps++;
		} else {
			c0 = 3 * c0 + 1; 
			cout << c0 << endl;
			steps++;
		}
	} while ( c0 != 1);
	
	cout << "Steps: " << steps << endl;

	

	
	return 0;
}