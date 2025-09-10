#include <iostream>
#include "identity.h"

int* identity(int* first, int* last) {
    if (first == last) {
        std::cout << "Array vazio" << std::endl;
        return nullptr;
    }
    
    int n = last - first;
    int left = 0;
    int right = n - 1;
    
    std::cout << "Procurando em array de tamanho " << n << std::endl;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        int mid_value = first[mid];
        
        std::cout << "left=" << left << ", right=" << right 
                  << ", mid=" << mid << ", arr[" << mid << "]=" << mid_value << std::endl;
        
        if (mid_value == mid) {
            std::cout << "Encontrado: " << mid_value << " na posição " << mid << std::endl;
            return first + mid;
        }
        else if (mid_value < mid) {
            std::cout << "Indo para direita" << std::endl;
            left = mid + 1;
        }
        else {
            std::cout << "Indo para esquerda" << std::endl;
            right = mid - 1;
        }
    }
    
    std::cout << "Não encontrado" << std::endl;
    return nullptr;
}


