#include <iostream>
#include "../include/find_duplicates.h"
#include <cassert>

int main() {
    // Teste 1: sem duplicatas
    int arr1[] = {1, 2, 3, 4, 5};
    assert(find_duplicates(arr1, 5) == false);

    // Teste 2: com duplicata
    int arr2[] = {1, 2, 3, 2, 5};
    assert(find_duplicates(arr2, 5) == true);

    // Teste 3: duplicata no final
    int arr3[] = {1, 2, 3, 4, 4};
    assert(find_duplicates(arr3, 5) == true);

    // Teste 4: duplicata no início
    int arr4[] = {2, 1, 2, 3, 4};
    assert(find_duplicates(arr4, 5) == true);

    std::cout << "Todos os testes do find_duplicates passaram!" << std::endl;
    return 0;
}
