#include <stdio.h>
int main(){
    int rows,i,j,odd=1,even=2;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        if(i%2==1){
            for(j=1;j<=i;j++){
                printf("%d",odd);
                odd+=2;
                if(j<i){
                    printf(" ");
                }
            
            }
        
        }
        else{
            for (j=1;j<=i;j++){
                printf("%d",even);
                even+=2;
                if(j<i){
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}