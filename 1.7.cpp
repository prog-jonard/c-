#include <iostream>
#include <cmath>
#include <cfloat>

using namespace std;

int main (){
	
	int val1, val2;
	
	cout << "Input 2 integer: ";
	cin >> val1;
	cin >> val2;
	
	float vval1 = static_cast<float>(val1);
	float vval2 = static_cast<float>(val2);
	
	if (val1 <= 0 || val2 <= 0){
		cout << "It must be grater than 0.";
		return 1;
	}
	
	float result1 = 1.0 / vval1;
	float result2 = 1.0/ vval2;
	
	if (abs(result1 - result2) < FLT_EPSILON) {
        cout << "Results are equal" << endl;
    }
    else if ((result1 - result2) > FLT_EPSILON) {
        cout << "The first result is greater." << endl;
    }
    else {
        cout << "The second result is greater." << endl;
    }
    
    return 0;
	
	return 0;
}