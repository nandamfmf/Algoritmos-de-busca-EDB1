#include "../include/sumofthree.h"
#include <cassert>
#include <iostream>

int main() {
    int a[] = {1, 2, -3};
    int b[] = {3, -1, 4};
    int c[] = {0, -4, 2};

    bool res = sumofthree(a, 3, b, 3, c, 3);
    assert(res == true); // exemplo que existe

    int a2[] = {10, 20};
    int b2[] = {1, 2};
    int c2[] = {3, 4};
    res = sumofthree(a2, 2, b2, 2, c2, 2);
    assert(res == false); // exemplo que não existe

    std::cout << "Todos os testes de sumofthree passaram!" << std::endl;
    return 0;
}
