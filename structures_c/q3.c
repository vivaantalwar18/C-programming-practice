//Write a program with a structure representing a complex number
#include <stdio.h>
typedef struct c{
    int real,imaginary;
} complex;

void main(){
    complex c ={1,2};
    printf("The value of the complex number is %d + %di",c.real,c.imaginary);
}