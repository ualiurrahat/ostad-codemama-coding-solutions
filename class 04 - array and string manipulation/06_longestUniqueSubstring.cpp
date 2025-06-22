/**
 * @file 06_longestUniqueSubstring.cpp
 * @brief Find the length of the longest substring without repeating characters.
 *
 * Problem Statement:
 * Write a program to find the length of the longest substring in a given string
 * without repeating characters.
 *
 * Input:
 * The program will take a string as input.
 *
 * Output:
 * The output will be the length of the longest substring, which will be an integer.
 *
 * Constraints:
 * 0 ≤ |S| ≤ 1000
 *
 * Example:
 * Input: abcabcbb
 * Output: 3
 * Explanation: The longest substring without repeating characters is "abc"
 */

#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

/**
 * @brief Finds the length of the longest substring without repeating characters.
 *
 * @param s The input string.
 * @return int The length of the longest unique-character substring.
 *
 * @note
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 */
int longestUniqueSubstringLength(const string &s)
{
    int maxLength = 0;
    int left = 0, right = 0;
    unordered_set<char> seenChars;

    // Use sliding window approach
    while (right < s.length())
    {
        // Expand the window by moving right
        if (seenChars.find(s[right]) == seenChars.end())
        {
            seenChars.insert(s[right]);
            maxLength = max(maxLength, right - left + 1);
            right++;
        }
        else
        {
            // Shrink the window from the left
            seenChars.erase(s[left]);
            left++;
        }
    }

    return maxLength;
}

/**
 * @brief Entry point of the program to read input and print output.
 *
 * @return int Exit status code.
 */
int main()
{
    string s;
    cin >> s;

    int result = longestUniqueSubstringLength(s);
    cout << result << endl;

    return 0;
}
