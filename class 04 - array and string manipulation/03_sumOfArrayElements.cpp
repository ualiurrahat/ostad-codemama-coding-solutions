/**
 * @file 03_sumOfArrayElements.cpp
 * @brief Calculate the sum of elements in an array that are less than the median value.
 *
 * Problem Statement:
 * Write a program where the user will give an array of elements.
 * You will have to print the sum of elements where each element will be less than the median element.
 *
 * Input:
 * The input consists of the size of the array and the elements of the array.
 * Every input will be an unsigned integer number.
 *
 * Output:
 * The output will be the sum of elements that are lesser than the median element.
 *
 * Constraints:
 * 0 ≤ |S| ≤ 10^9
 *
 * Example:
 * Enter size of the array and the elements.
 *
 * Input:
 * 6
 * 30 10 5 40 60 15
 *
 * Output:
 * 30
 *
 * Notes:
 * - The median is calculated from the sorted version of the array.
 * - However, the sum is computed from the original array elements that are strictly less than the median value.
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * @brief Entry point of the program that computes sum of elements less than the median.
 *
 * @return int Exit status code.
 *
 * @note
 * Time Complexity: O(n log n) for sorting + O(n) for summing = O(n log n)
 * Space Complexity: O(n) to store the array
 */
int main()
{
    int n; // size of the array
    cin >> n;

    vector<int> arr(n); // array to store n elements

    // Take user input for the array elements
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    // Step 1: Sort a copy of the array to find the median
    vector<int> sortedArr = arr;
    sort(sortedArr.begin(), sortedArr.end());

    int medianValue = 0;

    // Step 2: Calculate median value
    if (n % 2 == 0)
    {
        // For even-sized array, take average of middle two elements
        medianValue = (sortedArr[n / 2] + sortedArr[(n / 2) - 1]) / 2;
    }
    else
    {
        // For odd-sized array, pick the middle element
        medianValue = sortedArr[n / 2];
    }

    int sum = 0; // variable to hold sum of valid elements

    // Step 3: Traverse original array and sum elements less than the median
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] < medianValue)
        {
            sum += arr[i];
        }
    }

    // Output the result
    cout << sum << endl;

    return 0;
}
