#include <iostream>
#include <iterator>
#include "findtheduplicate.h"

int findduplicate(int* arr, int size) {
    int inicio = 0;
    int fim = size - 1;

    while (inicio < fim) {

        int mid = inicio + (fim - inicio) / 2;

        if (arr[mid] == mid) {
            inicio = mid + 1;
        } 
        
        else {
            fim = mid;
        }
    }

    return arr[inicio];
}

