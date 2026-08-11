//Write a program using function to find average of three numbers.
#include <stdio.h>
float average(float a, float b, float c);
    float average(float a, float b, float c){
        return (a+b+c)/3;
    }
int main(){
    int a; int b; int c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("the average of a,b,c is %f", average(a,b,c));
    return 0;
}