//Write a program to determine the largest of the four number.
#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("enter 1st number: ");
    scanf("%d", &a);
    printf("enter 2nd number: ");
    scanf("%d", &b);
    printf("enter 3rd number: ");
    scanf("%d", &c);
    printf("enter 4th number: ");
    scanf("%d", &d);
    if (a>b && a>c && a>d){
        printf("%d is the largest",a);
    }
    else if (b>a && b>c && b>d){
        printf("%d is the largest",b);
    }
    else if (c>a && c>b && c>d){
        printf("%d is the largest",c);
    }
    else if (d>a && d>c && d>b){
        printf("%d is the largest",d);
    }
    else{
        printf("you have entered equal values");
    }
    return 0;
}