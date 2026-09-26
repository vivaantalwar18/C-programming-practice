#include <stdio.h>
void main(){
    int s;
    float cp,d;
    printf("Enter cost price: ");
    scanf("%f",&cp);
    if(cp>=800){
        s=1;
    }
    else if(cp>=500 && cp<800){
        s=2;
    }
    else{
        s=3;
    }
    switch(s){
        case 1:
        d=0.25*(cp);
        printf("Discount = Rs. %.2f\n",d);
        break;
        case 2:
        d=0.20*cp;
        printf("Discount = Rs. %.2f\n",d);
        break;
        case 3:
        d=0;
        printf("Discount = Rs. %.2f\n",d);
        break;
    }
}