/**
 * @file 04_bmiCalculator.cpp
 * @brief Program to calculate BMI and determine weight category.
 *
 * @details
 * This program reads height (in meters) and weight (in kilograms) from the user,
 * calculates Body Mass Index (BMI) using the formula: BMI = weight / (height^2),
 * and then classifies the result into standard weight categories.
 */

#include <iostream>
#include <iomanip> // for fixed and setprecision
using namespace std;

/**
 * @brief Calculates the Body Mass Index (BMI).
 *
 * @param height Height in meters
 * @param weight Weight in kilograms
 * @return BMI value as a double
 *
 * @note
 * Time Complexity  : O(1)
 * Space Complexity : O(1)
 */
double calculateBMI(double height, double weight)
{
    return weight / (height * height);
}

/**
 * @brief Returns the BMI category based on the BMI value.
 *
 * @param bmi The calculated BMI value
 * @return A string representing the BMI category
 *
 * @note
 * Time Complexity  : O(1)
 * Space Complexity : O(1)
 */
string getBMICategory(double bmi)
{
    if (bmi < 18.5)
    {
        return "Underweight";
    }
    else if (bmi < 25.0)
    {
        return "Normal weight";
    }
    else if (bmi < 30.0)
    {
        return "Overweight";
    }
    else
    {
        return "Obese";
    }
}

// ---------------------- Main Function ----------------------

int main()
{
    // Prompt user to enter height and weight
    cout << "Enter height and weight: ";
    double height, weight;
    cin >> height >> weight;

    // Calculate BMI
    double bmi = calculateBMI(height, weight);

    // Output the BMI with two decimal places
    cout << "BMI: " << fixed << setprecision(2) << bmi << endl;

    // Output the BMI category
    cout << getBMICategory(bmi) << endl;

    return 0;
}
