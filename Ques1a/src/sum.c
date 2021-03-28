#include "ques.h"

complex_t summation(complex_t a, complex_t b){
    complex_t s;
    s.real = a.real + b.real;
    s.imaginary = a.imaginary + b.imaginary;
    return s;
}