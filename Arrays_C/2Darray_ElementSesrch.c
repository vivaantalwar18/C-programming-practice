#include <stdio.h>
void main(){
	int i,j,m,n,c=0,flag=0;
	int a[200][200],s;
	printf("Enter number of rows and columns: ");
	scanf("%d %d",&m,&n);
	printf("Enter matrix elements:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter element to search: ");
	scanf("%d",&s);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(a[i][j]==s){
				c++;
				flag = 1;
			}
		}
	}
	if (c>0 && flag==1){
		printf("%d found %d time(s)\n", s, c);
	}
	else{
		printf("%d not found in the matrix\n", s);
	}
}
