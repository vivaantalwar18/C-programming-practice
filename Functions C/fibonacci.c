/* Write a program using recursion to calculate nth element of Fibonacci series.*/
// 0,1,1,2,3,5,8,13,21,34,55,89....
#include <stdio.h>
//fibomacci(n) = fibomacci(n-1) + fibomacci(n-2);
int fibonacci(int);

int fibonacci(int n){
    if(n==1 || n==2){
        return n-1;
    }
    return (fibonacci(n-1) + fibonacci(n-2));
}
int fibonacci(int);
int main(){
    printf("Enter the value of n to find nth element of fibonacci series: ");
    int n;
    scanf("%d",&n);
    printf("The %dth element of the fibonacci series is: %d", n, fibonacci(n));
    return 0;
}