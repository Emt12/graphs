#include "vector.h"
#include <stdint.h>
#include <stdlib.h>

void push_back(Vector2D vect, Data data){
    if(vect->type == 25){
        vect->iList->ml = (int*)realloc(vect->iList, sizeof(vect->iList) + sizeof(int*));
    }
    else if(vect->type == 32)
    {

    }
}

void pop_back(Vector2D vect){}

Vector2D create_vector(uint8_t type){
    Vector2D vect = malloc(sizeof(Vector2D));

    if(type == 25){
        iVector2D ivct = init_i();

        vect->iList = ivct;
        vect->cList = NULL;
        vect->length = &ivct->length;
        vect->type = (uint8_t)25;
        
        vect->pop_back = pop_back;
        vect->push_back = push_back;

        return vect;

    }
    else if(type == 32)
    {
        return vect;
    }

    return vect;
}