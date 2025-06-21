/**
 * @file 01_searchVowel.cpp
 * @brief Program to check if a string contains any vowel.
 *
 * Problem Statement:
 * Write a program to check if there is a vowel in a string.
 *
 * Input:
 * The input consists of a string.
 *
 * Output:
 * Output will be the answer whether there is a vowel or not.
 * If there is a vowel, it will print:
 *      "The string contains a vowel."
 * Otherwise, it will print:
 *      "The string does not contain any vowel."
 *
 * Constraints:
 * - The program will terminate as soon as a vowel is found.
 *
 * Example 1:
 * Input: Hello
 * Output: The string contains a vowel.
 *
 * Example 2:
 * Input: BCDFGHJKLMNPQRSTVWXYZ
 * Output: The string does not contain any vowel.
 */

#include <iostream>
#include <string>

using namespace std;

/**
 * @brief Entry point of the program to check vowel existence in a string.
 *
 * @return int Exit status code.
 *
 * @note
 * Time Complexity: O(n), where n is the length of the input string.
 * Space Complexity: O(1), constant extra space.
 */
int main()
{
    string str;
    cin >> str;

    // Loop through each character of the string
    for (int i = 0; i < str.size(); ++i)
    {
        // Check if current character is a vowel (case-insensitive)
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U')
        {
            cout << "The string contains a vowel." << endl;
            return 0; // Exit immediately after finding the first vowel
        }
    }

    // No vowel found after complete traversal
    cout << "The string does not contain any vowel." << endl;

    return 0;
}
