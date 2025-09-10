#include <iostream>
#include "../include/findtheduplicate.h"
#include <cassert>

int main() {
    // Teste 1: duplicata no meio
    int arr1[] = {0, 1, 2, 3, 3, 4, 5};
    assert(findduplicate(arr1, 7) == 3);

    // Teste 2: duplicata no final
    int arr2[] = {0, 1, 2, 4, 4, 5, 6};
    assert(findduplicate(arr2, 7) == 4);

    // Teste 3: duplicata no início
    int arr3[] = {0, 0, 1, 2, 3, 4};
    assert(findduplicate(arr3, 6) == 0);

    std::cout << "Todos os testes do findtheduplicate passaram!" << std::endl;
    return 0;
}
