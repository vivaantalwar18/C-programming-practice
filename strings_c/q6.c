//Write a program to check whether a given character is present in a string or not.
#include <stdio.h>
#include <string.h>
void main(){
    char c;
    printf("enter character u want to check");
    scanf("%s",&c);
    int contains = 0;
    char str[]="Land rover defender";
    for(int i=0; i<strlen(str);i++)
    {
        if(str[i]==c)
        {
            contains=1;
            break;
        }
    }
    if(contains){
        printf("Yes it contains\n");
    }
    else{
        printf("does not contain\n");
    }
}