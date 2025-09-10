#ifndef MINIMOLOCALMATRIZ_H
#define MINIMOLOCALMATRIZ_H

struct Posicao {
    int linha;
    int coluna;
};

Posicao minimolocalmatriz(int matriz[][100], int n_linhas, int n_colunas);

#endif
