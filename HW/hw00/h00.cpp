/**
 *  @author Vy Nguyen
 *  @date Semester 2023
 *  @file h00.cpp
 */
#include <iostream>
#include <string>
using namespace std;

string STUDENT = "vnguyen844";  // Add your Canvas login name
extern string ASSIGNMENT;

/**
 * This program converts cereal boxes weight from oz to metric ton.
 * @return 0 for success.
 */
int run()
{
    /* Important Commands:
    - make: to build
    - make run: build and run (can just use this one, no need to use make)
    - make test: to test
    - make stest: builds and runs your student tests
    - make submit: builds, tests and sunmits homework (in class assingment, we don't use this)
    */

    /* Pseudocode:
     - given: OZ_IN_METRIC_TON = 35274.92
     - input: ozPerBox
     - outputs:
        - weightInTons = weightInOz / OZ_IN_METRIC_TON
        - boxesInTons = 1 / weightInTons
    */


    // Write your code here
    const double OZ_PER_METRIC_TON = 35273.92;
    double ozPerBox;

    cout << "\n" << STUDENT << "-" << ASSIGNMENT << ": ";
    cout << " ⭐️ Cereal Box Calculator ⭐️" << endl;
    cout << string(50, '-') << endl;

    // input
    cout << "\nEnter ounces per box of cereal 🥣: ";
    cin >> ozPerBox;

    // calculation
    double weightInTons = ozPerBox / OZ_PER_METRIC_TON;
    double boxesInTons = 1.0 / weightInTons;

    // output
    cout << "Weight in metric tons, boxes per ton: " << "[" << weightInTons << ", " << boxesInTons << "]\n" << endl;
    cout << string(50, '-') << endl;

    return 0;
}
