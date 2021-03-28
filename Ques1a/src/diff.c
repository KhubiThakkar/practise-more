#include "ques.h"

complex_t difference(complex_t a, complex_t b){
    complex_t d;
    d.real = a.real - b.real;
    d.imaginary = a.imaginary - b.imaginary;
    return d;
}