#include <iostream>
#include <algorithm>
#include <iterator>
#include "biotonicsearch.h"

int *encontra_pico(int *first, int *last){
    
    if(first == last){
        return nullptr;
    }
    
    if(first + 1 == last){
        return first;
    }
        
    if (*first > *(first + 1)) {
        return first;
    }
     
    if (*(last - 1) > *(last - 2)) {
        return last - 1;
    }

    int *pico = nullptr;

    while(first < last - 1){

        int *mid = first + std::distance(first, last)/2;

        if (*(mid - 1) < *mid && *mid > *(mid + 1)) {
            return mid;
        }

        if(*(mid-1) < *mid && *mid < *(mid+1)){
                first = mid + 1;
        }

        else if(*(mid-1) > *mid && *mid > *(mid+1)){
                last = mid;
            }

        pico = mid;
    }
    
    return pico;
};

    int *procura_nocrescente(int *first, int *pico, int target){
        while(first < pico){
            int *mid1 = first + std::distance(first, pico)/2;
            
            if(*mid1 == target){
                return mid1;
            }

            if(target < *mid1){
               pico = mid1;
            }
            else{
                first = mid1 + 1;
            }
        }
        
        return nullptr;

    };


    int *procura_nodecrescente(int *pico, int *last, int target){
        int* first = pico; 

        while(first < last){
        int* mid = first + std::distance(first, last)/2;

        if(*mid == target){
            return mid;
        }

        if(*mid > target){
            first = mid + 1; 
        } 
        else{
            last = mid; 
    }

}
    return nullptr;
}

int *biotonicsearch(int *first, int *last, int target){
     if (first == last) {
        return nullptr;
    }

    int *pico = encontra_pico(first, last);
    if (pico == nullptr) {
        return nullptr; 
    }

    if (*pico == target) {
        return pico;
    }

    int *result = procura_nocrescente(first, pico, target);
    if (result != nullptr) {
        return result;
    }

    return procura_nodecrescente(pico, last, target);
}

