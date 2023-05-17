/**
    @file h07.h
    @author Stephen Gilbert
    @version CS150 Function Declarations
*/
#ifndef H07_H_
#define H07_H_

#include <string>
/**
   Computes a barcode given a 5-digit zip code.
   @param zip the 5-digit zip code.
   @return the bar code with | for full bars and : for half bars.
 */
std::string barCode(int zip);

/**
   Returns the bar code value for a given digit.
   @param digit integer
   @return string encoding of the digit
*/
std::string codeForDigit(int digit);

/**
 * Calculates the check digit for a zip code.
 * @param zip the zip code
 * @return check digit for zip according to this rule.
 *
 * Sum all the digits in the zip code.
 */
int checkDigit(int zip);

#endif