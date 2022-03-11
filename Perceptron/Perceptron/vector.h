/*
Author: vtarale
Breif: preceptron library for c
*/

#ifndef MODEL
#define MODEL

struct vector {
    int *array;

    // methods
    int (*randomize)(struct vector *me);
    int (*destruct)(struct vector **me);
};

#endif