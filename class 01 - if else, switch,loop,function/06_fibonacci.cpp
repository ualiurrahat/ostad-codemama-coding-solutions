/**
 * @file 06_fibonacci.cpp
 * @brief Compute the nth Fibonacci number modulo 10^9 + 7
 */

/**
 * Problem Statement:
 * The Fibonacci sequence is defined as:
 *   F₀ = 0, F₁ = 1, and Fᵢ = Fᵢ₋₁ + Fᵢ₋₂ for i ≥ 2
 * You are given an integer n. Your task is to compute Fₙ modulo 10^9 + 7.
 *
 * Input:
 * - A single integer n (2 ≤ n ≤ 10^6)
 *
 * Output:
 * - Print the nth Fibonacci number modulo 10^9 + 7
 *
 * Example 1:
 * Input: 5
 * Output: 5
 *
 * Example 2:
 * Input: 2
 * Output: 1
 */

#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

/**
 * @brief Main function to compute and print the nth Fibonacci number modulo MOD.
 *
 * @note Time Complexity: O(n)
 * @note Space Complexity: O(1)
 */
int main()
{
    // ---------------------- Input section ----------------------
    int n;
    cin >> n;

    // ---------------------- Handle base cases ----------------------
    int a = 0, b = 1;

    if (n == 0)
    {
        cout << a << endl;
        return 0;
    }
    if (n == 1)
    {
        cout << b << endl;
        return 0;
    }

    // ---------------------- Iteratively compute Fibonacci up to n ----------------------
    for (int i = 2; i <= n; ++i)
    {
        int c = (a + b) % MOD;
        a = b;
        b = c;
    }

    // ---------------------- Output the nth Fibonacci ----------------------
    cout << b << endl;
    return 0;
}
