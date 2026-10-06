/*Splitting an Array into Two Halves*/
#include <stdio.h>
int main(){
    int a[10],first[5],second[5],i;
    printf("Enter 10 elements:\n");
        for(i=0;i<10;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<5;i++){
            first[i]=a[i];
            second[i]=a[i+5];
        }
        printf("First array:\n");
        for(i=0;i<5;i++){
            printf("%d ",first[i]);
        }
        printf("\nSecond array:\n");
        for(i=0;i<5;i++){
            printf("%d ",second[i]);
        }
    return 0;
}