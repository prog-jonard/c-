#include <iostream>
using namespace std;

int main (){
	int arr [4];
	cout << "Input 4 number from 1-255: \n";
	
	for (int i = 0; i < 4; i++){
			cout << "Enter Number: ";
			cin >> arr[i];
			if (arr[i] > 255){
				cout << "The number is Invalid. Try Again\n";
				cout << "Enter Number: ";
				cin >> arr[i];
			}
	}
	
	for (int i = 0; i < 4; i++){
		if (arr[i] > 255){
			cout << "Invalid!";
		}
	}
	
	cout << arr[0] << "." << arr[1] << "." << arr[2] << "." << arr[3];
	
	return 0;
}