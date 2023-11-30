#include "_int-vect.h"
#include <stdlib.h>

void push_back_i(iVector2D vect, int data){
    vect->ml = (int*)realloc(vect->ml ,sizeof(int*));
    vect->ml[vect->length] = data;
    vect->length++;
}

void pop_back_i(iVector2D vect){
    vect->ml = (int*)realloc(vect, sizeof(vect->ml) + sizeof(int*));
    vect->length--;
}

iVector2D init_i(){
    iVector2D vect = (iVector2D)malloc(sizeof(iVector2D));
    vect->ml = (int*)malloc(sizeof(int*));
    vect->length = 0;

    vect->push_back_i = push_back_i;
    vect->pop_back_i = pop_back_i;

    if(vect == NULL) return (iVector2D)0;

    return vect;
}