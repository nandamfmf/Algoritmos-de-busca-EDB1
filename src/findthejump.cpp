#include "findthejump.h"
#include <iterator>
#include <algorithm>

int* findthejump(int* first, int* last) {
    if (first == last || last - first == 1) {
        return nullptr; 
    }

    int* inicio = first;
    int* fim = last;

    while (inicio < fim) {
        int* mid = inicio + (fim - inicio) / 2;
        int indice = std::distance(first, mid);
        int valor_esperado = *first + indice;
        
        if (*mid == valor_esperado) {
            inicio = mid + 1; 
        } else {
            fim = mid; 
        }
    }

    if (inicio >= last) {
        return nullptr;
    }

    int indice = std::distance(first, inicio);
    int valor_esperado = *first + indice;

    if (*inicio != valor_esperado) {
        return inicio;
    }

    return nullptr;
}

