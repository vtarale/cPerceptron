/*
Author: vtarale
Breif: Perceptron implementation in c
*/

#include <stdio.h>

float weigths[] = {0.9, 2.0};
float bias = 1;
float learning_rate = 0.1;

int acitvation(float);
float predict(int, int);
void update(int, int, int);

int main(void) {
    printf("Hello, world\n");

    for (int i = 0; i < 50; ++i) {
        if (i % 2 == 0) 
            update(i, i+5, 1);
        else 
            update(i+5, i, -1);
    }

    int ans = predict(5, 10);
    printf("%i\n", ans);
}

int activation(float x) {
    if (x < 0)
        return -1;
    else
        return 1;
}

float predict(int x, int y) {
    // prediction y=mx+b
    // dot product
    float dot_product = 0.0;
    dot_product = dot_product + (weigths[0] * x);
    dot_product = dot_product + (weigths[1] * y);
    // return perdiction
    int ans = activation(dot_product + bias);
    return ans;
}

void update(int x, int y, int answer) {
    int prediction = predict(x, y);
    // calculate error
    int int_error = answer - prediction;
    float error = (float)int_error;
    // calculate gradient
    float gradientx = error * (float)x * learning_rate;
    float gradienty = error * (float)y * learning_rate;
    // add with weigths
    weigths[0] = weigths[0] + gradientx;
    weigths[1] = weigths[1] + gradienty;
}