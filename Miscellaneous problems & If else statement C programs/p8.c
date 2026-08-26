/*Write a program that takes three sides of a triangle input and calculates its area, 
if these conditions are satisfied a+b>c, b+c>a, a+c>b, calculate area=(a+b+c)/2*/
#include <stdio.h>
int main(){
    int a,b,c, area;
    printf("enter three sides of the triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    if ((a+b)>c && (b+c)>a && (a+c)>b)
    {
        area=(a+b+c)/2;
        printf("Area of triangle is: %d ", area);
    }
    else{
        printf("the given sides cannot form triangle");
    }
    return 0;
}