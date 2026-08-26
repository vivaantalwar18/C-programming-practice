#include <stdio.h>
int main(){
    int a;
    printf("Enter a number to check whether odd or even: ");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("%d is even number",a);
    }
    else
    {
        printf("%d is an odd number",a);
    }
    return 0;
}