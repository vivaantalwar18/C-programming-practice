#include <stdio.h>
void main(){
    int rows,i,j;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    for(i=rows;i>=1;i--){
        for(j=i;j>=1;j--){
            printf("*");
        }
        printf("\n");
    }
}