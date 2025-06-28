/**
 * @file 01_primeNumber.cpp
 * @brief Program to check whether a given number is a prime number.
 *
 * Problem Statement:
 * Write a program where you will be given a number. You will have to check whether the number is prime or not.
 *
 * Input:
 * The input consists of an integer number.
 *
 * Output:
 * The output will print whether the number is prime or not.
 * For example, for 13 it will print "13 is a prime number."
 * For 24 it will print "24 is not a prime number."
 *
 * Constraints:
 * 0 ≤ |S| ≤ 10^9
 *
 * Example:
 * Input:
 * 13
 * Output:
 * 13 is a prime number.
 */

#include <iostream> // Required for input/output operations
using namespace std;

/**
 * @brief Checks whether a number is a prime number.
 *
 * @param n The number to check.
 * @return Returns 1 if the number is prime, otherwise 0.
 *
 * @note
 * Time Complexity  : O(√n/2)
 * Space Complexity : O(1)
 */
int isPrime(int n)
{
    // Any number less than 2 is not prime
    if (n < 2)
    {
        return 0;
    }

    // 2 is the only even prime number
    if (n == 2)
    {
        return 1;
    }

    // Eliminate all other even numbers
    if (n % 2 == 0)
    {
        return 0;
    }

    // Check for odd divisors from 3 up to √n
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1; // If no divisors found, number is prime
}

/**
 * @brief Main function to read input and display result.
 *
 * @return int
 */
int main()
{
    int num;

    // Prompt and take input
    cout << "Enter number." << endl;
    cin >> num;

    // Output result based on primality check
    if (isPrime(num))
    {
        cout << num << " is a prime number." << endl;
    }
    else
    {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}
