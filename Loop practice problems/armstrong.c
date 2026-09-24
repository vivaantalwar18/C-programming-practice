#include <stdio.h>
void main(){
    int n,rem,sum=0,temp;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n/=10;
    }
    if(temp==sum){
        printf("The number is an Armstrong number.\n");
    } else {
        printf("The number is not an Armstrong number.\n"); 
    }
}