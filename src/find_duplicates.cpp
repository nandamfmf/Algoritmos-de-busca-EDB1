#include <iostream>
#include <cmath> 
#include "find_duplicates.h"

bool find_duplicates(int* arr, int n) {
    for (int i = 0; i < n; ++i) {
        int index = std::abs(arr[i]) - 1; 
        
        if (*(arr + index) < 0) {
            return true;
        }
        
        *(arr + index) = -*(arr + index);
    }
    return false;
}


