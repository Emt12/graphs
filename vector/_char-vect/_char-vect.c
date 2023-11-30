#include "_char-vect.h"

void push_back_c(cVector2D vect, int data){
    vect->ml = (char*)realloc(vect->ml ,sizeof(char*));
    vect->ml[vect->length] = data;
    vect->length++;
}

void pop_back_c(cVector2D vect){
    vect->ml = (char*)realloc(vect, sizeof(vect->ml) + sizeof(char*));
    vect->length--;
}

cVector2D init_i(){
    cVector2D vect = (cVector2D)malloc(sizeof(cVector2D));
    vect->ml = (char*)malloc(sizeof(char*));
    vect->length = 0;

    vect->push_back_c = push_back_c;
    vect->pop_back_c = pop_back_c;

    if(vect == NULL) return (cVector2D)0;

    return vect;
}