#include <iostream>
#include "../include/biotonicsearch.h"
#include <cassert>

int main() {
    int arr1[] = {1, 3, 8, 12, 4, 2};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);

    // Teste 1: busca no lado crescente
    int* res = biotonicsearch(arr1, arr1 + size1, 3);
    assert(res == arr1 + 1); // arr1[1] == 3

    // Teste 2: busca no pico
    res = biotonicsearch(arr1, arr1 + size1, 12);
    assert(res == arr1 + 3); // arr1[3] == 12

    // Teste 3: busca no lado decrescente
    res = biotonicsearch(arr1, arr1 + size1, 4);
    assert(res == arr1 + 4); // arr1[4] == 4

    // Teste 4: elemento não existente
    res = biotonicsearch(arr1, arr1 + size1, 7);
    assert(res == nullptr);

    // Teste 5: primeiro elemento
    res = biotonicsearch(arr1, arr1 + size1, 1);
    assert(res == arr1); // arr1[0] == 1

    std::cout << "Todos os testes do exercício 2 passaram!" << std::endl;
    return 0;
}
