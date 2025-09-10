#include "../include/search_rotatedarray.h"
#include <cassert>
#include <iostream>

int main() {
    int arr[] = {4,5,6,7,0,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    int* res = search_rotated(arr, arr+n, 0);
    assert(res != nullptr && *res == 0);

    res = search_rotated(arr, arr+n, 3);
    assert(res == nullptr);

    res = search_rotated(arr, arr+n, 5);
    assert(res != nullptr && *res == 5);

    std::cout << "Todos os testes de search_rotatedarray passaram!" << std::endl;
    return 0;
}
