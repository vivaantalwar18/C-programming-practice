/*Write a program to take two numbers as an input and find whether one number is a multiple 
of the other or not.*/
#include <stdio.h>
int main(){
    int a,b;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&a,&b);
    if (a%b==0)
    {
        printf("%d is the multiple of %d",a,b);
    }
    else if (b%a==0)
    {
        printf("%d is the multiple of %d",b,a);
    }
    else
    {
        printf("neither is a multiple of the other.");
    }
    return 0;
}