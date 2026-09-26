#include <stdio.h>
void main(){
    int call,s;
    float bill;
    printf("Enter number of calls: ");
    scanf("%d",&call);
    if (call>0 && call<=150){
        s=1;
    }
    else if(call>150 && call<=250){
        s=2;
    }
    else if(call>250 && call<=400){
        s=3;
    }
    else{
        s=4;
    }
    switch(s){
    case 1:
        bill=0;
        printf("Telephone Bill = Rs. %.2f\n",bill);
        break;
        case 2:
        bill = 0.9*(call-150);
        printf("Telephone Bill = Rs. %.2f\n",bill);
        break;
        case 3:
        bill = 0.9*100 + 1.2*(call-250);
        printf("Telephone Bill = Rs. %.2f\n",bill);
        break;case 4:
        bill=0.9*100 + 1.2*150+1.5*(call-400);
        printf("Telephone Bill = Rs. %.2f\n",bill);
        break;
    }
}