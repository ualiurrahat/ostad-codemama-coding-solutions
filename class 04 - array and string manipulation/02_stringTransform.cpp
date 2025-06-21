/**
 * @file 02_stringTransform.cpp
 * @brief Transform a string such that every third character (if alphabetic) is converted to uppercase.
 *
 * Problem Statement:
 * You are tasked with writing a program that takes a string S as input and transforms it such that
 * after every two characters, the following character is converted to uppercase.
 *
 * Input:
 * A string S containing alphanumeric and/or special characters.
 *
 * Output:
 * The transformed string where every third character (counting from the beginning) is in uppercase,
 * while the rest of the characters remain in lowercase.
 *
 * Constraints:
 * 3 ≤ |S| ≤ 100
 *
 * Note:
 * - Only alphabetic characters should be transformed to uppercase.
 * - Non-alphabetic characters should remain unchanged.
 *
 * Example 1:
 * Input: hello123world
 * Output: heLlo123WorLd
 *
 * Example 2:
 * Input: abcdefg
 * Output: abCdeFg
 */

#include <iostream>
#include <string>

using namespace std;

/**
 * @brief Entry point of the program that performs the string transformation.
 *
 * @return int Exit status code.
 *
 * @note
 * Time Complexity: O(n), where n is the length of the input string.
 * Space Complexity: O(1), in-place transformation.
 */
int main()
{
    string str;
    cin >> str;

    int n = str.size();

    // Traverse the string character by character
    for (int i = 0; i < n; ++i)
    {
        // Check if current position is the third character (1-based index)
        if ((i + 1) % 3 == 0)
        {
            // Convert to uppercase only if it is a lowercase alphabet
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 32;
            }
        }
    }

    // Output the transformed string
    cout << str << endl;

    return 0;
}
