#include "minimolocalmatriz.h"
#include <climits>

Posicao minimolocalmatriz(int matriz[][100], int n_linhas, int n_colunas) {
    int left = 0;
    int right = n_colunas - 1;

    while (left <= right) {
        int mid_col = left + (right - left) / 2;

        int min_row = 0;
        for (int row = 1; row < n_linhas; ++row) {
            if (matriz[row][mid_col] < matriz[min_row][mid_col]) {
                min_row = row;
            }
        }

        int left_val = (mid_col > 0) ? matriz[min_row][mid_col - 1] : INT_MAX;
        int right_val = (mid_col < n_colunas - 1) ? matriz[min_row][mid_col + 1] : INT_MAX;

        if (matriz[min_row][mid_col] < left_val && matriz[min_row][mid_col] < right_val) {
            return {min_row, mid_col}; 
        }

        if (left_val < matriz[min_row][mid_col]) {
            right = mid_col - 1;
        } else {
            left = mid_col + 1;
        }
    }

    return {0, 0}; 
}


