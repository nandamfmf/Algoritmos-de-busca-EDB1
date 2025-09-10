#include <iostream>
#include "../include/binarysearchwithduplicates.h"
#include <cassert>

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);

    // Teste 1: encontrar primeira ocorrência de 2
    int* res = binarysearchwithduplicates(arr, arr + size - 1, 2);
    assert(res == arr + 1);

    // Teste 2: encontrar primeira ocorrência de 4
    res = binarysearchwithduplicates(arr, arr + size - 1, 4);
    assert(res == arr + 4);

    // Teste 3: elemento não existente
    res = binarysearchwithduplicates(arr, arr + size - 1, 6);
    assert(res == arr + size - 1);

    // Teste 4: primeiro elemento
    res = binarysearchwithduplicates(arr, arr + size - 1, 1);
    assert(res == arr);

    std::cout << "Todos os testes de binary search passaram!" << std::endl;
    return 0;
}
