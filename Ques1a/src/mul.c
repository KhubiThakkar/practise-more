#include "ques.h"

complex_t multi(complex_t a, complex_t b){
    complex_t m;
    m.real = (a.real * b.real) - (a.imaginary * b.imaginary);
    m.imaginary = (a.imaginary * b.real) + (a.real * b.imaginary);
    return m;
}