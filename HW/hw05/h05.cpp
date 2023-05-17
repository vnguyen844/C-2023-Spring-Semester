/**
 *  @author Vy Nguyen
 *  @date 02-19-2023
 *  @file h05.cpp
 */
#include <string>
#include <cctype>
using namespace std;

string STUDENT = "vnguyen844";  // Add your Canvas login name

int sumNums(const string& str) {
	int sum {0}, num {0};

	for (size_t i{0}, len{str.size()}; i < len; ++i) {
		char c = str.at(i);
		if (isdigit(c)) { // check for digit
			int digit =  c - '0';
			num = (num * 10) + digit;
		} else {
			sum += num;
			num = 0;
		}
	}

	return sum + num;
}



/////////////// Optional Student Code /////////////////
#include <iostream>
int run()
{
	// Add any code you like here
	// cout << R"(sumNums("abc123xyz")->123? )" << sumNums("abc123xyz") << endl;
	// cout << R"(sumNums("aa11b33")->44? )" << sumNums("aa11b33") << endl;
	// cout << R"(sumNums("7 11")->18? )" << sumNums("7 11") << endl;

   return 0;
}

