//Write a program to decrypt the string encrypted using encrypt function in previous problem.
#include <stdio.h>
#include <string.h>
void main(){
    char str[]="Upzpub!Gpsuvofs!Mfhfoefs";
    for(int i=0; i<strlen(str);i++)
    {
        str[i]-=1;
    }
    printf("%s",str);
}
