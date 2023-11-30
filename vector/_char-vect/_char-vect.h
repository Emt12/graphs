#pragma once
#define _CHAR_VECT_H
#ifdef _CHAR_VECT_H

#include <stdio.h>
#include <stdlib.h>

typedef struct cVector2Dn* cVector2D;
typedef struct cVector3Dn* cVector3D; /*Later Implemented*/

struct cVector2Dn{
    char* ml;
    int length;

    void (*push_back_c)(cVector2D, int);
    void (*pop_back_c)(cVector2D);
};

void push_back_c(cVector2D, int);
void pop_back_c(cVector2D);
cVector2D init_c();

#endif