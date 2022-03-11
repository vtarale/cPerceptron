/*
Author: vtarale
Breif: preceptron library for c
*/

#ifndef MODEL
#define MODEL

#include "vector.h"

struct Perceptron {
    struct vector *weigths;

    // methods
    int (*destruct)(struct Perceptron **me);
};

#endif