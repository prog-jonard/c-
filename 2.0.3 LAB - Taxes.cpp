#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double gross_price, taxrate, taxvalue, net_price;
	
	cout << "Input total amount: ";
	cin >> gross_price;
	cout << "Input tax rate: ";
	cin >> taxrate;

	if (100.0 >= taxrate <= 0.0 || gross_price <= 0.0){
		cout << "Invalid Input try again.";
	}else{
		net_price = gross_price / (1.0 + taxrate / 100.0);
		taxvalue = gross_price - net_price;
	}
	
	cout << fixed << setprecision(2);
	cout << "Net Price: " << net_price << endl;
	cout << "Tax Value: " << taxvalue << endl;
 	
	return 0;
}