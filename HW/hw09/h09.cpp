/**
 *  @author Vy Nguyen
 *  @date 3-5-23
 *  @file h09.cpp
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string STUDENT = "vnguyen844"; // Add your Canvas/occ-email ID

#include "h09.h"


bool read(const string& prompt, int& n, bool ln) {
    ln = false;

    cout << prompt;
    cin >> n;

    if (cin.fail() || n <= 0) {
        cin.clear();
        cin.ignore(1024, '\n');
    } else {
        ln = true;
    }

    return ln;
}

bool read(const string& prompt, double& n, bool ln) {
    ln = false;

    cout << prompt;
    cin >> n;
    string trash;

    if (cin.fail() || n <= 0) {
        cin.clear();
    } else {
        cin.ignore(1024, '\n');
        ln = true;
        cin >> trash;
    }

    return ln;

}

bool read(const string& prompt, string& s, bool ln) {
    
    cout << prompt;

    if (ln) {
        getline(cin,s);

    } else  {
        cin >> s;
    }
    return ln;

}

bool read(char& c, char sentinel) {

    bool result {true};
    cin >> c;
    cin.get();

    if (c == sentinel) {
        result = false;
    }

    return result;
}


////////////////// STUDENT TESTING /////////////
int run()
{
    cout << "Student testing" << endl;

    // int age;
    // if (read("How old are you? ", age))
    //     cout << "You don't look " << age << " years old!" << endl;
    // else
    //     cout << "Hmm. Doesn't look like you entered an int." << endl;

    // double gpa;
    // if (read("What is your gpa? ", gpa, true))
    //     cout << "Wow! " << fixed << setprecision(2) << gpa << "? I'm impressed." << endl;
    // else
    //     cout << "Sorry. I can't understand what you typed." << endl;

    // string name;
    // if (read("What is your full name? ", name, true))
    //     cout << "Hi " << name << ". Glad to meet you." << endl;
    // else
    //     cout << "Hmm. Is that your FULL name?" << endl;

    // cout << "Type a sentence ending in a period: ";
    // char ch;
    // while (read(ch, '.')) cout << ch;
    // cout << "." << endl;

    return 0;
}
