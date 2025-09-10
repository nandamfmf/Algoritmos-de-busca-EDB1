#include <iostream>
#include <iterator> 
#include "sumofthree.h"
using namespace std;

void merge_crescente(int *first, int *mid, int *last) {
    int n1 = distance(first, mid);
    int n2 = distance(mid, last);

    int *esq = new int[n1];
    int *dir = new int[n2];

    for (int i = 0; i < n1; i++){
        esq[i] = first[i];
    }
    for (int j = 0; j < n2; j++){
        dir[j] = mid[j];
    }

    int i = 0, j = 0;
    int *k = first;

    while (i < n1 && j < n2) {
        if (esq[i] <= dir[j]) {
            *k = esq[i];
            i++;
        } else {
            *k = dir[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        *k = esq[i];
        i++;
        k++;
    }
    while (j < n2) {
        *k = dir[j];
        j++;
        k++;
    }

    delete[] esq;
    delete[] dir;
}

void merge_decrescente(int *first, int *mid, int *last) {
    int n1 = distance(first, mid);
    int n2 = distance(mid, last);

    int *esq = new int[n1];
    int *dir = new int[n2];

    for (int i = 0; i < n1; i++){
        esq[i] = first[i];
    }
    for (int j = 0; j < n2; j++){
        dir[j] = mid[j];
    }

    int i = 0, j = 0;
    int *k = first;

    while (i < n1 && j < n2) {
        if (esq[i] >= dir[j]) {
            *k = esq[i];
            i++;
        } else {
            *k = dir[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        *k = esq[i];
        i++;
        k++;
    }
    while (j < n2) {
        *k = dir[j];
        j++;
        k++;
    }

    delete[] esq;
    delete[] dir;
}

void mergesort_crescente(int *first, int *last) {
    int n = distance(first, last);
    if (n > 1) {
        int *mid = first + n / 2;

        mergesort_crescente(first, mid);

        mergesort_crescente(mid, last);

        merge_crescente(first, mid, last);
    }
}

void mergesort_decrescente(int *first, int *last) {
    int n = distance(first, last);
    if (n > 1) {
        int *mid = first + n / 2;

        mergesort_decrescente(first, mid);

        mergesort_decrescente(mid, last);

        merge_decrescente(first, mid, last);
    }
}

bool sumofthree(int a[], int na, int b[], int nb, int c[], int nc){
    
    mergesort_crescente(b, b + nb);

    mergesort_decrescente(c, c + nc);

    for (int i = 0; i < na; i++) {
        int aval = a[i];
        int alvo = -aval;
        int indice_b = 0;
        int indice_c = 0;

        while (indice_b < nb && indice_c < nc) {
            int soma = b[indice_b] + c[indice_c];
            if (soma == alvo) {
                cout << "a= " << aval << ", b= " << b[indice_b] << ", c= " << c[indice_c] << endl;
                return true;
            }
            if (soma < alvo) {
                indice_b++; 
            } else {
                indice_c++; 
            }
        }
    }

    return false;
}
