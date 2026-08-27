#include <stdio.h>
int factorial(int);
int factorial (int n){
    if(n==1 || n==0){ //Base condition
        return 1;
    }
    //  factorial(n) = factorial(n-1)*n
    return factorial (n-1)*n;
}
int main(){
    int a;
    printf("Enter a number to find its factorial: ");
    scanf("%d",&a);
    printf("Factorial of %d is: %d\n", a, factorial(a));
    return 0;
}