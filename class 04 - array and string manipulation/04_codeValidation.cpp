/**
 * @file 04_codeValidation.cpp
 * @brief Determine whether a string is a valid code based on given constraints.
 *
 * Problem Statement:
 * A code must begin with a pound key '#' and be exactly 7 characters long.
 * Each character after '#' must be a digit (0-9) or an alphabetic character (A-F or a-f).
 *
 * Input:
 * A string S.
 *
 * Output:
 * Print "true" if the string is a valid code, otherwise print "false".
 *
 * Constraints:
 * 0 ≤ |S| ≤ 1000
 *
 * Example:
 * Input: #CD5C5C
 * Output: true
 */

#include <iostream>
#include <string>

using namespace std;

/**
 * @brief Checks if a character is a valid code character (0-9, A-F, a-f).
 *
 * @param ch Character to check.
 * @return true if valid, false otherwise.
 */
bool validCharacter(char ch)
{
    bool isUpperAlpha = (ch >= 'A' && ch <= 'F');
    bool isLowerAlpha = (ch >= 'a' && ch <= 'f');
    bool isDigit = (ch >= '0' && ch <= '9');
    return isUpperAlpha || isLowerAlpha || isDigit;
}

/**
 * @brief Validates the entire code string.
 *
 * @param str Input string to validate.
 */
void codeValidity(const string &str)
{
    int n = str.size();

    // Check length and first character condition
    if (n != 7 || str[0] != '#')
    {
        cout << "false" << endl;
        return;
    }

    // Check remaining characters for validity
    for (int i = 1; i < n; ++i)
    {
        if (!validCharacter(str[i]))
        {
            cout << "false" << endl;
            return;
        }
    }

    // All conditions met
    cout << "true" << endl;
}

int main()
{
    string str;
    cin >> str;

    codeValidity(str);

    return 0;
}
