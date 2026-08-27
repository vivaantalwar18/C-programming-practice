#include <stdio.h>

int main() {
    int n,f,x,s,y,t,l,sum;
    printf("enter 4 digit number: ");
    scanf("%d",&n);
    f=n/1000;
    x=n%1000;
    s=x/100;
    y=x%100;
    t=y/10;
    l=y%10;
    printf("\n first digit =%d \n second digit = %d \n third digit = %d \n last digit = %d\n",f,s,t,l);
    sum=f+s+t+l;
    printf("\n sum of all 4 digits: %d",sum);
    return 0;
}