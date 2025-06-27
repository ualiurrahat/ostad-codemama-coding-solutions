/**
 * @file binarySearchIndex.cpp
 * @brief Find the index of a target element in a sorted array using binary search.
 */

/**
 * Problem Statement:
 * Write a program to find the index of a target element from a sorted array in logarithmic time.
 * If the target element exists in the array, print its index. Otherwise, print "Element not found".
 *
 * Input:
 * - First input: integer N, size of the sorted array.
 * - Next N integers: elements of array M[] in sorted order.
 * - Final input: integer P, the target value to find.
 *
 * Output:
 * - Index of target element if found.
 * - Otherwise, print "Element not found".
 *
 * Constraints:
 * - 0 ≤ N ≤ 100000
 * - 0 ≤ M[i] ≤ 100000
 * - 0 ≤ P ≤ 100000
 *
 * Example 1:
 * Input:
 * 5
 * 10 20 30 40 50
 * 20
 * Output:
 * 1
 *
 * Example 2:
 * Input:
 * 5
 * 10 20 30 40 50
 * 60
 * Output:
 * Element not found
 */

#include <iostream>
using namespace std;

/**
 * @brief Performs binary search on a sorted array to find the target element.
 *
 * @param arr The input sorted array.
 * @param n The size of the array.
 * @param target The value to search for.
 * @return int Index of target if found, else -1.
 *
 * @note Time Complexity: O(log n)
 * @note Space Complexity: O(1)
 */
int binarySearch(int arr[], int n, int target)
{
    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1; // Target not found
}

/**
 * @brief Main function to read input, perform search, and print result.
 */
int main()
{
    // ---------------------- Input Section ----------------------
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    // ---------------------- Binary Search Execution ----------------------
    int result = binarySearch(arr, n, target);

    if (result != -1)
    {
        cout << result << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}
