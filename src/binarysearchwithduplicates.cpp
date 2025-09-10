#include <iostream>
#include <algorithm>
#include <iterator>
#include "binarysearchwithduplicates.h"

int *binarysearchwithduplicates(int *first, int *last, int target){
    while (first < last){
        int *mid = first + std::distance(first, last)/2;

        if(target <= *mid){
            last = mid;
        }

        else{
            first = mid + 1;
        }
    }

        if (*first == target) {
            return first; // Retorna a PRIMEIRA ocorrência
        }

    return last;
}

