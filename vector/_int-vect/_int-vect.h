#pragma once
#define _INT_VECT_H
#ifdef _INT_VECT_H

#include <stdlib.h>
#include <stdio.h>

typedef struct iVector2Dn* iVector2D;
typedef struct iVector3Dn* iVector3D; /*Later Implemented*/

struct iVector2Dn{
    int* ml;
    int length;
    
    void (*push_back_i)(iVector2D, int);
    void (*pop_back_i)(iVector2D);
};

void push_back_i(iVector2D, int);
void pop_back_i(iVector2D);
iVector2D init_i();

#endif