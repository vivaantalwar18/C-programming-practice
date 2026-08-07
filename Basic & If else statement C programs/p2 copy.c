#include <stdio.h>
int main(){
    int age;
    scanf("%d", &age);
    if (age >= 18){
        printf("You are eligible to vote");
    }
    else{
        printf("you aren't eligible to vote");
        }   
    return 0;
}