#include <iostream>
#include <vector>
using namespace std;
void setZeroes(std::vector<std::vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    bool firstRowZero = false;
    bool firstColZero = false;

    // Check if the first row contains any zero
    for (int j = 0; j < cols; ++j) {
        if (matrix[0][j] == 0) {
            firstRowZero = true;
            break;
        }
    }

    // Check if the first column contains any zero
    for (int i = 0; i < rows; ++i) {
        if (matrix[i][0] == 0) {
            firstColZero = true;
            break;
        }
    }

    // Use the first row and first column to mark the zero positions
    for (int i = 1; i < rows; ++i) {
        for (int j = 1; j < cols; ++j) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    // Set zeroes based on the marks in the first row and first column
    for (int i = 1; i < rows; ++i) {
        for (int j = 1; j < cols; ++j) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }

    // Set zeroes for the first row and first column if needed
    if (firstRowZero) {
        for (int j = 0; j < cols; ++j) {
            matrix[0][j] = 0;
        }
    }

    if (firstColZero) {
        for (int i = 0; i < rows; ++i) {
            matrix[i][0] = 0;
        }
    }
}

int main() {
    // Example usage:
    std::vector<std::vector<int>> matrix = {{1, 2, 3},
                                           {4, 0, 6},
                                           {7, 8, 9}};

    setZeroes(matrix);

    // Display the modified matrix
    for (const auto& row : matrix) {
        for (int value : row) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
