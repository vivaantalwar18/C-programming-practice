//Write a C program to print all prime numbers between two given numbers. 
#include <stdio.h>
void main(){
    int i,j,a,b,f;
    printf("Enter two numbers between which you want to find prime numbers: ");
    scanf("%d %d",&a,&b);
    printf("Prime numbers between %d and %d are: ",a,b);
    for(i=a;i<=b;i++){
        f=0;
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                f=1;
                break;
            }
        }
        if(f==0 && i!=1){
            printf("%d ",i);
        }
    }
}