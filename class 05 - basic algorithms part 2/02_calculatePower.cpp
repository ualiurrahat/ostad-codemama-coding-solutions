/**
 * @file 02_calculatePower.cpp
 * @brief Program to calculate the power of a number using iterative multiplication.
 *
 * Problem Statement:
 * Write a program where you will be given a number and its exponent.
 * You will have to calculate the power of the number.
 *
 * Input:
 * The input consists of two integer numbers (base and exponent).
 *
 * Output:
 * The output will be an integer number (base^exponent).
 *
 * Constraints:
 * 0 ≤ |S| ≤ 10^9
 *
 * Example:
 * Input:
 * 3 4
 * Output:
 * 81
 */

#include <iostream> // For standard I/O operations
using namespace std;

/**
 * @brief Calculates the power of a number using iterative method.
 *
 * @param base The base number.
 * @param exponent The exponent (power to raise the base).
 * @return Returns the result of base^exponent.
 *
 * @note
 * Time Complexity  : O(power)
 * Space Complexity : O(1)
 */
int calculatePower(int base, int exponent)
{
    int result = 1;

    // Multiply base with itself exponent times
    while (exponent--)
    {
        result *= base;
    }

    return result;
}

/**
 * @brief Main function to read input and display result.
 *
 * @return int
 */
int main()
{
    int base, exponent;

    // Prompt user for input
    cout << "Enter numbers." << endl;
    cin >> base >> exponent;

    // Calculate power
    int result = calculatePower(base, exponent);

    // Output the result
    cout << result << endl;

    return 0;
}
