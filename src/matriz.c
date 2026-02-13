#include "matriz.h"
#include <stdlib.h>

struct Matriz{
    double** data;
    size_t rows;
    size_t cols;
};


Matriz* matriz_create(size_t rows, size_t cols){
    Matriz* matriz = malloc(sizeof(Matriz));

    matriz->data = malloc(sizeof(double*)* rows);
    for (size_t i = 0; i < rows; i++) {
        matriz->data[i] = malloc(sizeof(double*)* cols);       
    }

    matriz->rows = rows;
    matriz->cols = cols;

    return matriz;
}