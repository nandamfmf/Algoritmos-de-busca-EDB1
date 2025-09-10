#include <iostream>
#include "../include/floorandceiling.h"
#include <cassert>

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int* first = arr;
    int* last = arr + 5;

    // Teste 1: target menor que o menor elemento
    int* f = floor(first, last, 0);
    int* c = ceiling(first, last, 0);
    assert(f == nullptr);
    assert(c == arr); // ceiling é 1

    // Teste 2: target entre elementos
    f = floor(first, last, 2);
    c = ceiling(first, last, 2);
    assert(*f == 1);
    assert(*c == 3);

    // Teste 3: target existe no array
    f = floor(first, last, 5);
    c = ceiling(first, last, 5);
    assert(*f == 5);
    assert(*c == 5);

    // Teste 4: target entre elementos
    f = floor(first, last, 6);
    c = ceiling(first, last, 6);
    assert(*f == 5);
    assert(*c == 7);

    // Teste 5: target maior que o maior elemento
    f = floor(first, last, 10);
    c = ceiling(first, last, 10);
    assert(*f == 9);
    assert(c == nullptr);

    std::cout << "Todos os testes de floorandceiling passaram!" << std::endl;
    return 0;
}
