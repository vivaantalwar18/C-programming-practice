//. Write a C program to keep accepting numbers until the user enters 0, then 
//display the sum of all entered numbers. 

#include <stdio.h>
void main(){
    int a ,sum=0;
    printf("Enter number: ");
    scanf("%d",&a);
    while (a!=0){
        sum = sum + a;
        
        scanf("%d",&a);
    }
    printf("Sum is: %d",sum);
}