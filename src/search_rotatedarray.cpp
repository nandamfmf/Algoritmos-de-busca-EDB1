#include <iostream>
#include <iterator>
#include <algorithm>
#include "search_rotatedarray.h"

int *search_rotated(int *first, int *last, int target) {
    int *inicio = first;
    int *fim = last;
    
    while (inicio < fim) {
        int *mid = inicio + std::distance(inicio, fim)/2;
        
        if(*mid == target){
            return mid;
        }
        
        // Verifica se lado esquerdo está ordenado
        if (*inicio < *mid)  {
            if (target >= *inicio && target < *mid) {
                fim = mid; // busca na esquerda
            } else {
                inicio = mid + 1;  // busca na direita
            }
        }

        // Caso contrário, lado direito está ordenado
        else{
            if (target >= *mid && target < *(fim-1)) {
                inicio = mid + 1;
            } else {
                fim = mid;  // busca na direita
            }
        }
    
    }
    return nullptr;
}

