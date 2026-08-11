//Write a function to calculate force of attraction on a body of mass earth. Consider g = 9.8m/s² 
#include <stdio.h>

float force(float);

float force(float mass){
    return (mass*9.8);
}
int main(){
    int m;
    printf("Enter mass of the body: ");
    scanf("%d",&m);
    printf("the value of force is %f\n", force(m));
    return 0;    
}