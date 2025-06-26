/**
 * @file 01_minimumYetImportant.cpp
 * @brief Program to find the minimum of three numbers.
 *
 * @details
 * Given three integers as input, this program determines the smallest among them.
 * The logic uses simple comparison to update the minimum value.
 */

#include <iostream>
using namespace std;

/**
 * @brief Finds the minimum among three integers.
 *
 * @param a First integer
 * @param b Second integer
 * @param c Third integer
 * @return The minimum of the three integers
 *
 * @note
 * Time Complexity  : O(1)
 * Space Complexity : O(1)
 */
int findMinimum(int a, int b, int c)
{
    int minimum = a;

    if (b < minimum)
    {
        minimum = b;
    }

    if (c < minimum)
    {
        minimum = c;
    }

    return minimum;
}

// ---------------------- Main Function ----------------------

int main()
{
    // Input three integers from the user
    cout << "Enter three numbers: ";
    int a, b, c;
    cin >> a >> b >> c;

    // Output the minimum of the three numbers
    cout << findMinimum(a, b, c) << endl;

    return 0;
}
