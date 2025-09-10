#include <iostream>
#include <cassert>
#include "rowswithzero.h"
using namespace std;

int findRowWithMostZeros(int** matrix, int n) {
    if (n == 0 || matrix == nullptr) return -1;
    
    int maxZeros = -1;
    int resultRow = -1;
    
    for (int row = 0; row < n; row++) {
        int col = 0;
        while (col < n && matrix[row][col] == 0) {
            col++;
        }
        
        int zerosInRow = col;
        
        if (zerosInRow > maxZeros) {
            maxZeros = zerosInRow;
            resultRow = row;
        }
    }
    
    return resultRow;
}

int** createMatrix(int n) {
    int** matrix = new int*[n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[n];
    }
    return matrix;
}

void deleteMatrix(int** matrix, int n) {
    if (matrix == nullptr) return;
    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}
