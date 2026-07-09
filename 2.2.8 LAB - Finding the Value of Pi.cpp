#include <iostream>
using namespace std;

int main(){
	double pi4 = 0.;
	long n;
	
	cout << "Number of iterations? ";
	cin >> n;
	
	double denominator = 1.0;
    double sign = 1.0; // 1.0 for positive, -1.0 for negative
    
    for (long i = 0; i < n; ++i) {
        pi4 += sign / denominator;
        
        denominator += 2.0; // Changes denominator to 1, 3, 5, 7, 9...
        sign = -sign;       // Flips the sign between + and -
    }
	
	cout.precision(20);
	cout << "Pi = " << (pi4 * 4) << endl;
		
	return 0;
}