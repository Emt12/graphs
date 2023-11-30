#pragma once
#define VECTOR_H
#ifdef VECTOR_H

#include "_int-vect/_int-vect.h"
#include "_char-vect/_char-vect.h"

#include <stdlib.h>

typedef unsigned char uint8_t;
typedef struct nVector2D* Vector2D;


typedef union List{
    iVector2D ivect;
    cVector2D cvect;
}List;

typedef union Data{
    int integer;
    char character;
}Data;

struct nVector2D{
    iVector2D iList;
    cVector2D cList;

    int* length;
    uint8_t type;

    void (*push_back)(Vector2D, Data);
    void (*pop_back)(Vector2D);
};

Vector2D create_vector(uint8_t);
void push_back(Vector2D, Data);
void pop_back(Vector2D);

#endif