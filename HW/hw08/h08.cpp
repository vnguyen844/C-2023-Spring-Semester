/**
 *  @author Vy Nguyen
 *  @date 3-5-23
 *  @file h08.cpp
 */
#include <string>
using namespace std;

string STUDENT = "vnguyen844"; // Add your Canvas/occ-email ID

#include "h08.h"

string digit(int n, const string& symbols) {
	string result;

	const string one = symbols.substr(0,1);
	const string five = symbols.substr(1,1);
	const string ten = symbols.substr(2,1);

	switch(n) {
		case 1:
			result = one;
			break;
		case 2:
			result = one + one;
			break;
		case 3:
			result = one + one + one;
			break;
		case 4:
			result = one + five;
			break;
		case 5:
			result = five;
			break;
		case 6:
			result = five + one;
			break;
		case 7:
			result = five + one + one;
			break;
		case 8:
			result = five + one + one + one;
			break;
		case 9:
			result = one + ten;
			break;
	}

	return result;
}

string toRoman(int n) {
	string result, thousands = "M";
	int temp = n;

	if (n <= 0 || n > 3999) {
		result = "OUT OF RANGE";

	} else {
		result = ones(temp % 10);
		temp /= 10;

		result = tens(temp % 10) + result;
		temp /= 10;

		result = hundreds(temp % 10) + result;
		temp /= 10;

		for (int i = 0; i < temp; ++i) {
			result = "M" + result;
		}

	}
	
	return result;

}

/////////// Student Testing ///////////////////////
#include <iostream>
int run()
{
	cout << "Student Testing" << endl;
	// cout << digit(5, "IVX") << endl; // V
	// cout << digit(3, "XLC") << endl; // XXX
    return 0;
}