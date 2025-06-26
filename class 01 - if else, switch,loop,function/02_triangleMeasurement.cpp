/**
 * @file 02_triangleMeasurement.cpp
 * @brief Program to calculate the area of a triangle using base and height.
 *
 * @details
 * This program takes two integers as input—base and height—and calculates the area
 * using the formula: Area = 0.5 × base × height.
 * The final output is cast to an integer as specified in the problem.
 */

#include <iostream>
using namespace std;

/**
 * @brief Calculates the area of a triangle.
 *
 * @param base The base of the triangle.
 * @param height The height of the triangle.
 * @return The area of the triangle as an integer.
 *
 * @note
 * Time Complexity  : O(1)
 * Space Complexity : O(1)
 */
int calculateTriangleArea(int base, int height)
{
    double area = 0.5 * base * height;
    return static_cast<int>(area);
}

// ---------------------- Main Function ----------------------

int main()
{
    // Prompt user to enter base and height
    cout << "Enter the base and height of the triangle: ";
    int base, height;
    cin >> base >> height;

    // Output the integer value of the triangle's area
    cout << calculateTriangleArea(base, height) << endl;

    return 0;
}
