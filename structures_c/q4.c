/*Create an array of 5 complex numbers created in Problem 5 and display them with the
help of a display function. The values must be taken as an input from the user.*/
#include <stdio.h>
typedef struct c
{
    int real, imaginary;
} complex;

void display(complex c)
{
    printf("The value of the complex number is %d + %di\n", c.real, c.imaginary);
}

void main()
{
    complex carr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("ENter real part: \n");
        scanf("%d", &carr[i].real);
        printf("ENter imaginary part: \n");
        scanf("%d", &carr[i].imaginary);
        display(carr[i]);
    }
}