#include <iostream>
#include <iterator>
#include <algorithm>
#include "floorandceiling.h"
using namespace std;


int *floor(int *first, int *last, int target){

    int *candidato = nullptr;
    int *inicio = first;
    int *fim = last;

    while(inicio < fim){
        int *mid = inicio + std::distance(inicio, fim)/2;

        if(target == *mid){
            return mid; // se o target estiver no array, ele é o prórpio floor.
        }

        if(target > *mid){
            candidato = mid;
            inicio = mid + 1;
        }

        if(target < *mid){
            fim = mid;
        }
}

return candidato;

}

int *ceiling(int *first, int *last, int target){
    int *inicio = first;
    int *fim = last;
    int *candidato = nullptr;

    while(inicio < fim){
    int *mid = inicio + std::distance(inicio, fim)/2;

        if(target == *mid){
            return mid; // se o target estiver no array, ele é o prórpio ceiling.
        }

        if(target < *mid){
            candidato = mid;
            fim = mid;
        }

        if(target > *mid){
            inicio = mid + 1;
        }
}

return candidato;

}

