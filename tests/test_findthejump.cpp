#include "../include/findthejump.h"
#include <cassert>

int main() {
    int arr[] = {2, 3, 4, 5, 7};
    int* res = findthejump(arr, arr + 5);
    assert(res == arr + 4);
    return 0;
}

