#include <stdio.h>
void main(){
    int a[50],i,n,v,c=0;
    printf("Enter actual array size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter number to be searched: ");
    scanf("%d",&v);
    for (i=0;i<n;i++){
        if(a[i]==v){
            c++;
            printf("Element %d is present at index %d\n",v,i);
            break;
        }
        else{
            printf("%d is not present in the array\n",v);
        }
    }

}