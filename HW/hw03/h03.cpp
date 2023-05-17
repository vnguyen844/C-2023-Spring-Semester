/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h03.cpp
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string STUDENT = "vnguyen844";  // Add your Canvas login name
extern string ASSIGNMENT;

// Add your function declaration here
string getStatus(double gpa, int credit, int honorsCredits);


/**
 * This program helps determine your graduation status based on your gpa, credit and honorsCredits
 * @return 0 for success.
 */
int run()
{
	// DON'T CHANGE ANYTHING IN THIS FUNCTION

    cout << STUDENT << "-" << ASSIGNMENT << "-Graduation Calculator" << endl;
	cout << "-----------------------------------------" << endl;

	cout << "Enter gpa, total credits and honors credits: ";
	double gpa;
	int credits, honorsCredits;
	cin >> gpa >> credits >> honorsCredits;

	// You will write this function
	string result = getStatus(gpa, credits, honorsCredits);

	cout << "Result is [\"" << result << "\"]" << endl;

    return 0;
}

// Implement your function here
string getStatus(double gpa, int credit, int honorsCredits) {
	string result;

	if (credit >= 180 && gpa >= 2.0) {
		if (gpa >= 2.0 && gpa < 3.6) {
			result = "graduating";

		} else if (honorsCredits < 15) {
			if (gpa >= 3.6 && gpa < 3.8) {
				result = "cum laude";
			} else if (gpa >= 3.8) {
				result = "magna cum laude";
			}
		} else if (honorsCredits >= 15) {
			if (gpa >= 3.6 && gpa < 3.8) {
				result = "magna cum laude";
			} else if (gpa >= 3.8) {
				result = "summa cum laude";
			}
		}
	} else {
		result = "not graduating";
	}

	return result;
}