#include <stdio.h>
void main(){
    int calls,s;
    float bill;
    printf("Enter number of calls: ");
    scanf("%d",&calls);
    if (calls<=100){
        s=1;
    }
    else if (calls<=150){
        s=2;
    }
    else if(calls<=200){
        s=3;
    }
    else{
        s=4;
    }
    switch(s){
        case 1:
        bill=200;
        printf("Internet Bill = Rs. %.2f\n",bill);
        break;
        case 2:
        bill=200+(calls-100)*0.60;
        printf("Internet Bill = Rs. %.2f\n",bill);
        break;
        case 3:
        bill=200+50*0.60+(calls-150)*0.50;
        printf("Internet Bill = Rs. %.2f\n",bill);
        break;
        case 4:
        bill=200+50*0.60+50*0.50+(calls-200)*0.40;
        printf("Internet Bill = Rs. %.2f\n",bill);
        break;
    }
}