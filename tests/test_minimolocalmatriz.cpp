#include "../include/minimolocalmatriz.h"
#include <cassert>
#include <iostream>

int main() {
    int matriz1[3][100] = {
        {10, 8, 10},
        {14, 13, 12},
        {15, 9, 11}
    };

    Posicao res = minimolocalmatriz(matriz1, 3, 3);
    assert(res.linha == 0 && res.coluna == 1); // valor 8 é mínimo local

    int matriz2[2][100] = {
        {1, 2},
        {3, 0}
    };
    res = minimolocalmatriz(matriz2, 2, 2);
    assert(res.linha == 1 && res.coluna == 1); // valor 0

    std::cout << "Todos os testes de minimolocalmatriz passaram!" << std::endl;
    return 0;
}
