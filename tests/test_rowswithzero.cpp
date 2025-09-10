#include "../include/rowswithzero.h"
#include <cassert>
#include <iostream>

int main() {
    int n = 3;
    int** mat = createMatrix(n);

    // Matriz exemplo
    mat[0][0] = 0; mat[0][1] = 0; mat[0][2] = 1;
    mat[1][0] = 0; mat[1][1] = 0; mat[1][2] = 0;
    mat[2][0] = 1; mat[2][1] = 0; mat[2][2] = 0;

    int row = findRowWithMostZeros(mat, n);
    assert(row == 1); // linha 1 tem 3 zeros

    deleteMatrix(mat, n);

    std::cout << "Todos os testes de rowswithzero passaram!" << std::endl;
    return 0;
}
