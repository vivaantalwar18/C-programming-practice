/*Write a program to find the total no. of days for a a given number of months counting from January month.
a. Example: m=3, days=31+ (28 Or 29) + 31.*/
#include <stdio.h>
int main(){
    int m, total=0;
    int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
    printf("Enter number of months: ");
    scanf("%d",&m);
    for (int i=0;i<m;i++){
        total+=days[i];
    }
    printf("Total number of days = %d\n",total);
    return 0;
}
