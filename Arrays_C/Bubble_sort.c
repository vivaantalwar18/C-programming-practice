#include <stdio.h>
void main(){
    int a[100],i,j,n,temp;
    printf("Enter actual array size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
        }
        
    }
    printf("Sorted array: ");
            for(i = 0; i < n; i++) {
                printf("%d\t", a[i]);
            }
            
}