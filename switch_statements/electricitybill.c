#include <stdio.h>
void main(){
    int unit,s;
    float bill;
    printf("Enter number of units: ");
    scanf("%d",&unit);
    if(unit>0 && unit<=100){
        s=1;
    }
    else if(unit>100 && unit<=200){
        s=2;
    }
    else if(unit>200&&unit<=400){
        s=3;
    }

    else{
        s=4;
    }
    switch(s){
        case 1:
        bill=0;
        printf("Electricity Bill = Rs. %.2f\n",bill);
        break;
        case 2:
        bill=1.5*(unit-100);
        printf("Electricity Bill = Rs. %.2f\n",bill);
        break;
        case 3:
        bill=1.5*100+(unit-200)*2.5;
        printf("Electricity Bill = Rs. %.2f\n",bill);
        break;
        case 4:
        bill=1.5*100+2.5*200+(unit-400)*3.5;
        printf("Electricity Bill = Rs. %.2f\n",bill);
        break;
    }
}