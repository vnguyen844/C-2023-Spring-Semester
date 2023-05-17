/**
 *  @author Vy Nguyen
 *  @date 02-18-2023
 *  @file h04.cpp
 */
#include <string>
#include <vector>
using namespace std;

string STUDENT = "vnguyen844";  // Add your Canvas login name
c
// Write your function here
string toFrenchGender(const string& country)
{

    /* PSEUDOCODE
     * Country end in letter e or o? Feminine prefix->la (space)
     * Otherwise? Masculine prefix->le (space)
     * With these exceptions
     *      Belize Cambodge Mexique Mozambique Zaire Zimbabwe (all le)
     *      Starts with a vowel? prefix l' (no space)
     *      Plural? prefix is les (space)
     *      Israel, Madagascar, Sri Lanka, Singapore, Monaco,
     *      Cuba and Cyprus have no prefix.*
     */

    string result, prefix;
    string islands {"iles"};
    size_t len = country.size();
    string last = country.substr(len - 2, 2);
    string vowels = {"AEIOU"};
    string first = country.substr(0,1);
    // vector<string> plain = {"Israel", "Madagascar", "Sri Lanka", "Singapore", "Monaco", "Cuba", "Cyprus"};
    // vector<string> masculine = {"Belize", "Cambodge", "Mexique", "Mozambique", "Zaire", "Zimbabwe"};

    if (country == "Israel" || country == "Madagascar" || country == "Sri Lanka" || country == "Monaco" || country == "Cuba" || country == "Cyprus" || country == "Singapore") {
        prefix = "";

    } else if (country == "Belize" || country == "Cambodge" || country == "Mexique" || country == "Mozambique" || country == "Zaire" || country == "Zimbabwe") {
        prefix = "le ";

    } else if (vowels.find(first) != NOT_FOUND) {
        prefix = "l'";

    } else if (country.substr(0, islands.size()) == islands || last == "es" || last == "is" || last == "os" || last == "as") {
            prefix = "les ";

    } else if (country.substr(len - 1) == "e" || country.substr(len - 1) == "o") {
        prefix = "la ";

    } else {
        prefix = "le ";
    }

    result = prefix + country;

    return result;
}

/////////////// Optional Student Code /////////////////
int run()
{
    return 0;
}