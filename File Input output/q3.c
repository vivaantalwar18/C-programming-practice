#include <stdio.h>
int main(){
    FILE *ptr;
    char name1[50],name2[50];
    int salary1,salary2;
    ptr = fopen("hello.txt","w");
    printf("Enter employee name: \n");
    scanf("%s",&name1);
    printf("Enter employee salary: \n");
    scanf("%d",&salary1);
    printf("Enter employee 2 name: \n");
    scanf("%s",&name2);
    printf("Enter employee 2 salary: \n");
    scanf("%d",&salary2);
    fprintf(ptr,"%s",name1);
    fprintf(ptr,"%s",", ");
    fprintf(ptr,"%d\n",salary1);
    fprintf(ptr,"%s",name2);
    fprintf(ptr,"%s",", ");
    fprintf(ptr,"%d\n",salary2);
    return 0;
}