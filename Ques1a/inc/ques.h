#ifndef __ques_h__
#define __ques_h__

/**
 * @brief redefining the structure name
 * 
 */
typedef struct complex_t
{
    float real;
    float imaginary;
} complex_t;

/**
 * @brief sum of two complex numbers
 * 
 * @param a is structure of complex type
 * @param b is structure of complex type
 * @return complex_t is structure of complex type
 */
complex_t summation(complex_t a, complex_t b);

/**
 * @brief difference of two complex numbers
 * 
 * @param a is structure of complex type
 * @param b is structure of complex type
 * @return complex_t is structure of complex type
 */
complex_t difference(complex_t a, complex_t b);

/**
 * @brief multiplication of two complex numbers
 * 
 * @param a is structure of complex type
 * @param b is structure of complex type
 * @return complex_t is structure of complex type
 */
complex_t multi(complex_t a, complex_t b);

#endif