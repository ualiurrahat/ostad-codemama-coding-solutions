/**
 * @file 05_whatWillBeGCD.cpp
 * @brief Program to calculate the Greatest Common Divisor (GCD) of two integers.
 *
 * @details
 * The program uses the iterative version of the Euclidean algorithm to calculate the GCD.
 * It handles cases where either of the inputs is zero.
 */

#include <iostream>
using namespace std;

/**
 * @brief Calculates the GCD of two integers using Euclidean algorithm.
 *
 * @param a First integer
 * @param b Second integer
 * @return The greatest common divisor of a and b
 *
 * @note
 * Time Complexity  : O(log(min(a, b)))
 * Space Complexity : O(1)
 */
int computeGCD(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    while (b != 0)
    {
        int temp = a;
        a = b;
        b = temp % b;
    }

    return a;
}

// ---------------------- Main Function ----------------------

int main()
{
    // Prompt user to enter two numbers
    cout << "Enter two numbers: ";
    int a, b;
    cin >> a >> b;

    // Output the GCD
    cout << computeGCD(a, b) << endl;

    return 0;
}
