/*Calculate income tax paid by an employee to the government as pe mentioned below:
Income Slab Tax
2.5-5.0L 5%
5.0L 10.OL 20%
Above 10.OL 30%*/
#include <stdio.h>
int main(){
    int income; 
    float tax;
    printf("enter ur income amount: ");
    scanf("%d", &income);
    if(income<250000){
        tax = 0;
    }
    else if(income>250000 && income<=500000){
        tax = 0.05 * (income - 250000);
    }
    else if (income>50000 && income<=1000000){
        tax = 0.05 * (500000-250000) + 0.2*(income-500000);
    }
    else{
        tax = 0.05 * (500000-250000) + 0.2*(1000000-500000) + 0.3 * (income - 1000000);
    }
    printf("the total tax u need to pay is %.2f", tax);
    return 0;
}