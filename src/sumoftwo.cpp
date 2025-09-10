#include "sumoftwo.h"

Indices sumoftwo(int a[], int b[], int tam_a, int tam_b) {
    for (int i = 0; i < tam_a; i++) {
        for (int j = i + 1; j < tam_a; j++) {
            int soma = a[i] + a[j];
            for (int k = 0; k < tam_b; k++) {
                if (soma == b[k]) {
                    return {i, j, k};
                }
            }
        }
    }
    return {-1, -1, -1};
}

