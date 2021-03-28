#include <stdio.h>
#include "ques.h"

int main(){
    // complex_t num1, num2;
    complex_t num1 = {1,3};
    complex_t num2 = {4,5};
    // printf("hello world\n");
    printf("NUM1 = %f +i%f\n",num1.real,num1.imaginary);
    printf("NUM2 = %f +i%f\n",num2.real,num2.imaginary);
    complex_t M = multi(num1,num2);
    complex_t S = summation(num2,num1);
    complex_t D = difference(num1,num2);
    printf("MUL = %f +i%f\n",M.real,M.imaginary);
    printf("SUM = %f +i%f\n",S.real,S.imaginary);
    printf("DIFF = %f +i%f\n",D.real,D.imaginary);
}