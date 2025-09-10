#include <cassert>
#include "../include/sumoftwo.h"

int main() {
    int a[] = {1, 2, 3};
    int b[] = {3, 5, 7};
    Indices res = sumoftwo(a, b, 3, 3);
    assert(res.i == 0 && res.j == 1 && res.k == 0); // 1 + 2 = 3, índice 0 em b

    int a2[] = {1, 1};
    int b2[] = {5};
    res = sumoftwo(a2, b2, 2, 1);
    assert(res.i == -1 && res.j == -1 && res.k == -1); // sem combinação

    return 0;
}
