/*Write a program to read three integers from a file.*/
#include <stdio.h>
void main(){
    FILE *fptr;
    fptr=fopen("file.txt","r");
    int num1,num2,num3;
    fscanf(fptr,"%d %d %d ",&num1,&num2,&num3);
    printf("The values are: %d, %d, %d", num1, num2, num3);
    fclose(fptr);

}