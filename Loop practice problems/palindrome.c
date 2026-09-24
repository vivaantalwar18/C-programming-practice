#include <stdio.h>
void main(){
    int n,rev=0,rem,temp;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        rem=n%10;
        rev=(rev*10)+rem;
        n/=10;
    }
    if(temp==rev){
        printf("The number is a palindrome.\n");
    } 
    else {
        printf("The number is not a palindrome.\n");    
    }
}