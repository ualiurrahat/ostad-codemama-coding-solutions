/**
 * @file 01_tripletSum.cpp
 * @brief Find a triplet in the array that sums to a given target.
 */

/**
 * Problem Statement:
 * You are given an array arr[] of size N and an integer P.
 * Find the triplet in the array which sums up to the given integer P.
 *
 * Input:
 * - First input is the integer N (size of the array)
 * - Then N space-separated integers: the elements of arr[]
 * - Then the target integer P
 *
 * Output:
 * - Print the triplet that adds up to P (in ascending order)
 *
 * Constraints:
 * - 0 ≤ N ≤ 100000
 * - 0 ≤ arr[i] ≤ 100000
 * - 0 ≤ P ≤ 100000
 *
 * Example:
 * Input:
 * 6
 * 12 3 4 1 6 9
 * 24
 *
 * Output:
 * 1 9 14
 */

#include <iostream>
#include <vector>
#include <algorithm> // For sort()

using namespace std;

/**
 * @brief Main function to read input, find the required triplet, and print the output.
 *
 * @note Time Complexity: O(n^3) in worst case (brute-force triple loop)
 * @note Space Complexity: O(3) → storing only one triplet in vector
 */
int main()
{
    // ---------------------- Input section ----------------------
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int targetSum;
    cin >> targetSum;

    // ---------------------- Brute-force triplet search ----------------------
    vector<int> result;

    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            for (int k = j + 1; k < n; ++k)
            {
                if (arr[i] + arr[j] + arr[k] == targetSum)
                {
                    // Store triplet and sort for clean output
                    result.push_back(arr[i]);
                    result.push_back(arr[j]);
                    result.push_back(arr[k]);

                    sort(result.begin(), result.end());

                    // Output the sorted triplet
                    cout << result[0] << " " << result[1] << " " << result[2] << endl;
                    return 0;
                }
            }
        }
    }

    // If no triplet found, print nothing (as per original logic)
    return 0;
}
