#include <stdio.h>
int main(){
    int age;
    scanf("%d", &age);
    if (age >= 60){
        printf("you are eligible to drive and you are a senior citizen your age is %d", age);
    }
    else if (age >= 18){
        printf("your age is %d and you are eligible to drive legally", age);
    }
    else{
        printf("your age is %d that is less than the legal age to drive so u can't drive",age);
    }
    return 0;
}