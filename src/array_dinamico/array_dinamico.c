#include "array_dinamico.h"

struct ArrayDinamico{
    int* data;
    size_t size;
    size_t capacity;
};

ArrayDinamico* array_dinamico_create(void){
    
}
void array_dinamico_destroy(ArrayDinamico* array);
void array_dinamico_print(ArrayDinamico* array);
int array_dinamico_get(ArrayDinamico* array, size_t index);
int array_dinamico_set(ArrayDinamico* array, size_t index, int value);
size_t array_dinamico_size(ArrayDinamico* array);
size_t array_dinamico_capacity(ArrayDinamico* array);
void array_dinamico_add(ArrayDinamico* array, int value);