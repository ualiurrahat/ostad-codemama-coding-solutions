/**
 * @file 05_rotateTheMatrix.cpp
 * @brief Rotate a square matrix 90 degrees clockwise.
 *
 * Problem Statement:
 * You are given a matrix of integers of size N×N.
 * You have to rotate it 90 degrees clockwise.
 *
 * Input:
 * The input consists of N+1 lines.
 * First line contains a single integer N.
 * The next N lines contain N integers each.
 *
 * Output:
 * Output the matrix after rotating 90 degrees clockwise.
 *
 * Constraints:
 * 1 ≤ N ≤ 100
 * Each integer in the matrix is between 1 and 10^4.
 *
 * Example 1:
 * Input:
 * 2
 * 1 2
 * 3 4
 * Output:
 * 3 1
 * 4 2
 *
 * Example 2:
 * Input:
 * 1
 * 5
 * Output:
 * 5
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * @brief Rotates an NxN matrix 90 degrees clockwise.
 *
 * @param matrix Reference to the 2D matrix to rotate.
 *
 * @note
 * Time Complexity: O(N^2)
 * Space Complexity: O(1) — in-place rotation
 */
void rotateMatrix90Clockwise(vector<vector<int>> &matrix)
{
    int n = matrix.size();

    // Step 1: Transpose the matrix (flip over diagonal)
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Step 2: Reverse each row to complete clockwise rotation
    for (int i = 0; i < n; ++i)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

/**
 * @brief Entry point of the program that handles input and output.
 *
 * @return int Exit status code.
 */
int main()
{
    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    // Take input for the matrix
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> matrix[i][j];
        }
    }

    // Rotate the matrix 90 degrees clockwise
    rotateMatrix90Clockwise(matrix);

    // Print the rotated matrix
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
