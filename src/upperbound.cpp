#include <iostream>
#include <iterator>
#include <algorithm>
#include <cassert>
#include "upperbound.h"

int *binarysearch_last(int *first, int *last, int target) {
    int *begin = first;  
    int *end   = last;   // guardamos o end original
    
    while (first < last) {
        int *mid = first + std::distance(first, last) / 2;

        if (*mid <= target) {
            first = mid + 1;
        } else {
            last = mid;
        }
    }

    if (first > begin && *(first - 1) == target) {
        return first - 1; 
    }

    return end; 
}
