/**
    @file h10.cpp
    @author Vy Nguyen
    @version TTHEVE
*/
#include <string>
#include <stdexcept>
using namespace std;

#include "h10.h"

string STUDENT = "vnguyen844"; // Add your Canvas/occ-email ID

// Add your function implementations here
bool find(const string& s, const string& t) {
    size_t sSize = s.size();
    size_t tSize = t.size();

    if (sSize < tSize) {return false;}
    if (s.substr(0, tSize) == t) {return true;}
    else {
        return find(s.substr(1), t);
    }
}

string stringClean(const string& s) {
    size_t n = s.size();

    if (n < 2) {return s;}

    if (s[0] != s[1]) {
        return s[0] + stringClean(s.substr(1));
    }

    return stringClean(s.substr(1));
}



////////////////// Student Testing //////////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;
    return 0;
}
