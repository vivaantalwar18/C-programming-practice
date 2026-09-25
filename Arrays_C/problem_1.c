#include <stdio.h>
void main(){
    int a[100],n,i;
    printf("Enter actual array size: ");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Number entered are: ");
    for (i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}