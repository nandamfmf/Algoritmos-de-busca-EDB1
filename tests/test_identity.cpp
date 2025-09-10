#include "../include/identity.h"
#include <cassert>
#include <iostream>

void test_identity() {
    std::cout << "Executando testes..." << std::endl;
    
    // Teste 1: Elemento identidade no meio
    int arr1[] = {-10, 0, 2, 3, 5};
    int* res = identity(arr1, arr1 + 5);
    std::cout << "Teste 1: " << (res != nullptr ? *res : -1) << " em posição " << (res - arr1) << std::endl;
    assert(res != nullptr && *res == 2 && (res - arr1) == 2);
    
    // Teste 2: Sem elemento identidade
    int arr2[] = {0, 1, 2, 4, 5};
    res = identity(arr2, arr2 + 5);
    std::cout << "Teste 2: " << (res != nullptr ? *res : -1) << std::endl;
    assert(res == nullptr);
    
    // Teste 3: Array vazio
    int arr3[] = {};
    res = identity(arr3, arr3);
    std::cout << "Teste 3: " << (res != nullptr ? *res : -1) << std::endl;
    assert(res == nullptr);
    
    // Teste 4: Elemento identidade no início
    int arr4[] = {0, 2, 3, 4};
    res = identity(arr4, arr4 + 4);
    std::cout << "Teste 4: " << (res != nullptr ? *res : -1) << " em posição " << (res - arr4) << std::endl;
    assert(res != nullptr && *res == 0 && (res - arr4) == 0);
    
    // Teste 5: Elemento identidade no final
    int arr5[] = {-2, -1, 1, 3, 4};
    res = identity(arr5, arr5 + 5);
    std::cout << "Teste 5: " << (res != nullptr ? *res : -1) << " em posição " << (res - arr5) << std::endl;
    assert(res != nullptr && *res == 4 && (res - arr5) == 4);
    
    // Teste 6: Caso especial - números negativos
    int arr6[] = {-5, -3, -1, 3, 5};
    res = identity(arr6, arr6 + 5);
    std::cout << "Teste 6: " << (res != nullptr ? *res : -1) << " em posição " << (res - arr6) << std::endl;
    assert(res != nullptr && *res == 3 && (res - arr6) == 3);
    
    // Teste 7: Múltiplos elementos identidade (deve encontrar o primeiro)
    int arr7[] = {-1, 1, 2, 3, 4};
    res = identity(arr7, arr7 + 5);
    std::cout << "Teste 7: " << (res != nullptr ? *res : -1) << " em posição " << (res - arr7) << std::endl;
    assert(res != nullptr && *res == 1 && (res - arr7) == 1);
    
    std::cout << "Todos os testes passaram!" << std::endl;
}

int main() {
    try {
        test_identity();
        return 0;
    } catch (const std::exception& e) {
        std::cout << "Erro: " << e.what() << std::endl;
        return 1;
    }
}