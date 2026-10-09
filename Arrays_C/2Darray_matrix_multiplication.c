#include <stdio.h>
void main(){
	int a[100][100],b[100][100],c[100][100],m1,m2,n1,n2,i,j,k;
	printf("Enter rows and columns of first matrix: ");
	scanf("%d %d",&m1,&n1);
	printf("Enter rows and columns of second matrix: ");
	scanf("%d %d",&m2,&n2);
	if(n1!=m2){
		printf("Matrix multiplication is not possible\n");
	}
	else{
		printf("Enter first matrix:\n");
		for(i=0;i<m1;i++){
			for(j=0;j<n1;j++){
				scanf("%d",&a[i][j]);
			}
		}
		printf("Enter second matrix:\n");
		for(i=0;i<m2;i++){
			for(j=0;j<n2;j++){
				scanf("%d",&b[i][j]);
			}
		}

		for(i=0;i<m1;i++){
			for(j=0;j<n2;j++){
				c[i][j]=0;
				for(k=0;k<n1;k++){
					c[i][j]+=a[i][k]*b[k][j];
				}
			}
		}
		printf("Resultant Matrix:\n");
		for(i=0;i<m1;i++){
			for(j=0;j<n2;j++){
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
	}
}
