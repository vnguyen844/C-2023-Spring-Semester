/**
 *  @author Vy Nguyen
 *  @date 2-20-2023
 *  @file h06.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "vnguyen844"; // Add your Canvas/occ-email ID

#include "h06.h"

// Place your function definitions in this file.

string zipZap(const string& str) {
    string result {""};
    size_t len {str.size()};
    size_t i {0};

    if (len < 3) {
        result = str;
    } else {
        while (i < len - 2) {
            string word {str.substr(i,3)};
            if (word.at(0) == 'z' && word.at(2) == 'p') {
                result +=  "zp";
                i += 3;
            } else {
                result += word.at(0);
                i++;
            }
        }

        result += str.substr(i, len);
    }

    return result;
}

int countCode(const string& str) {
    int count {0};
    size_t code {4};

    for (size_t i{code}, len{str.size()}; i <= len; ++i) {
        string subs {str.substr(i - code, code)};
        if (subs.substr(0,2) == "co" && subs.back() == 'e') {
            count++;
        }
    }

    return count;

}
string everyNth(const string& str, int n) {
    string result {""};

    if (n > 1) {
        for (size_t i = 0, len = str.size(); i < len; i += n) {
            result += str.at(i);
        }
    }

    return result;

}
bool prefixAgain(const string& str, int n) {
    bool result {false};
    size_t len {str.size()};

    string pre = str.substr(0,n);
    for (size_t i  = 1; i < len; ++i) {
        if (pre == str.substr(i,n)) {
            result = true;
        }
    }

    return result;
}



////////////////// STUDENT TESTING /////////////
int run()
{
    cout << "Student testing" << endl;
    // prefixAgain("abXYabc", 1);
    countCode("aaacodebbb");
    countCode("codexxcode");
    return 0;
}