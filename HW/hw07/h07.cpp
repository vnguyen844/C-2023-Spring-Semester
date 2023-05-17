/**
 *  @author Vy Nguyen
 *  @date 3-3-23
 *  @file h07.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "vnguyen844"; // Add your Canvas/occ-email ID
const int kCheck10 = 10;
const int kCheck20 = 20;
const int kCheck30 = 30;
const int kCheck40 = 40;
const int kCheck50 = 50;

#include "h07.h"

string barCode(int zip) {
    int temp = zip, checkZip = checkDigit(zip);
    string fragment, checkDigitBar = codeForDigit(checkZip), barcode = "";

    while (temp > 0) {
        int last_digit = temp % 10;
        temp /= 10;

        fragment = codeForDigit(last_digit);
        barcode = fragment + barcode;
    }

    return "|" + barcode + checkDigitBar + "|";
}


string codeForDigit(int digit) {
    string barcode;

    switch (digit) {
        case 1:
            barcode = ":::||";
            break;
        case 2:
            barcode = "::|:|";
            break;
        case 3:
            barcode = "::||:";
            break;
        case 4:
            barcode = ":|::|";
            break;
        case 5:
            barcode = ":|:|:";
            break;
        case 6:
            barcode = ":||::";
            break;
        case 7:
            barcode = "|:::|";
            break;
        case 8:
            barcode = "|::|:";
            break;
        case 9:
            barcode = "|:|::";
            break;
        case 0:
            barcode = "||:::";
            break;

    }

    return barcode;
}


int checkDigit(int zip) {

    int sum = 0, holder = zip, digit;

    while (holder > 0) {
        int last_digit = holder % 10;
        holder /= 10;

        sum += last_digit;
    }

    if (sum <= kCheck10) {
        digit = kCheck10 - sum;
    } else if (sum <= kCheck20) {
        digit = kCheck20 - sum;
    } else if (sum <= kCheck30) {
        digit = kCheck30 - sum;
    } else if (sum <= kCheck40) {
        digit = kCheck40 - sum;
    } else {
        digit = kCheck50 - sum;
    }


    return digit;

}



/////////// Student Testing ///////////////////////
int run()
{
    return 0;
}