#include "../include/upperbound.h"
#include <cassert>
#include <iostream>

int main() {
    int arr[] = {1, 2, 2, 3, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int* res = binarysearch_last(arr, arr+n, 2);
    assert(res != arr+n && *res == 2);

    res = binarysearch_last(arr, arr+n, 5);
    assert(res == arr+n); // não encontrado

    res = binarysearch_last(arr, arr+n, 1);
    assert(res != arr+n && *res == 1);

    std::cout << "Todos os testes de upperbound passaram!" << std::endl;
    return 0;
}
