/**
 * @file 03_celsiusToFahrenheit.cpp
 * @brief Program to convert temperature from Celsius to Fahrenheit.
 *
 * @details
 * This program takes a temperature value in Celsius as input and converts it
 * to Fahrenheit using the formula: F = (9 × C + 160) / 5
 * The output is formatted to exactly two decimal places.
 */

#include <iostream>
#include <iomanip> // for fixed and setprecision
using namespace std;

/**
 * @brief Converts temperature from Celsius to Fahrenheit.
 *
 * @param celsius The temperature in Celsius.
 * @return The temperature in Fahrenheit.
 *
 * @note
 * Time Complexity  : O(1)
 * Space Complexity : O(1)
 */
float convertToFahrenheit(float celsius)
{
    return (9 * celsius + 160) / 5;
}

// ---------------------- Main Function ----------------------

int main()
{
    // Prompt user to enter temperature in Celsius
    cout << "Enter the temperature in Celsius: ";
    float celsius;
    cin >> celsius;

    // Calculate and output temperature in Fahrenheit with 2 decimal precision
    float fahrenheit = convertToFahrenheit(celsius);
    cout << "The temperature in Fahrenheit is: "
         << fixed << setprecision(2) << fahrenheit << endl;

    return 0;
}
