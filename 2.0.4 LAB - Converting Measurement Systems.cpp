#include <iostream>
using namespace std;

int main(){
	int choice, convert;
	double result1, result2;

	cout << "Pick: \n( 0 ) Metric\n( 1 ) Imperial\n";
	cout << "Choice: ";
	cin >> choice;
	
	const double meterpi = 0.0254;
	
	if (choice == 0){
		double meters;

		do{
		cout << "Input distance in meters: ";
		cin >> meters; 
			if (meters <= 0){
				cout << "Input invalid, it must be greater than 0\n";
			}	
		}while (meters <= 0);
		
		double totalinches = meters / meterpi;
		
		int feet = static_cast<int>(totalinches) / 12;
		
		double inches = totalinches - (feet * 12);
		
		cout << feet << "'"<< inches << "\"";
		
	}else if(choice == 1){
		int feet;
		double inches;
	
		do{
			cout << "Enter Feet: ";
			cin >> feet;
			cout << "Enter Inches: ";
			cin >> inches;
				if(feet <= 0 || inches <= 0){
					cout << "Invalid Input!\n";
				}
		}while (feet <= 0 || inches <= 0);
		
		if (inches >= 12.0) {
            int extra_feet = static_cast<int>(inches) / 12;
            feet += extra_feet;
            inches -= (extra_feet * 12);
        }
        
        double total_inches = (feet * 12) + inches;

        double meters = total_inches * meterpi;

        cout << "Converted distance: " << meters << "m\n";
		
	}else{
		cout << "Pick rightfully.";
	}
	
	return 0;
}