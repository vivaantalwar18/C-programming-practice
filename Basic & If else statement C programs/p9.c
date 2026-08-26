/*Write a program to check whether the given character is a vowel, consonant, or digit*/
#include <stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("It is a vowel");
    }
    else if (ch>='0' && ch<='9')
    {
        printf("it is digit");
    }
    else
    {
        printf("it is consonent");
    }
    return 0;
}