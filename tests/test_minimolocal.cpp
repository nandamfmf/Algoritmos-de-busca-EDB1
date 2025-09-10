#include <iostream>
#include "../include/minimolocal.h"
#include <cassert>

int main() {
    int arr1[] = {3, 2, 1, 2, 3};
    int* res = minimolocal(arr1, arr1 + 5);
    assert(res == arr1 + 2);

    int arr2[] = {1, 2, 3, 4};
    res = minimolocal(arr2, arr2 + 4);
    assert(res == arr2);

    int arr3[] = {5, 4, 3, 1};
    res = minimolocal(arr3, arr3 + 4);
    assert(res == arr3 + 3);

    int arr4[] = {};
    res = minimolocal(arr4, arr4);
    assert(res == nullptr);

    int arr5[] = {10};
    res = minimolocal(arr5, arr5 + 1);
    assert(res == arr5);

    std::cout << "Todos os testes de minimolocal passaram!" << std::endl;
    return 0;
}
