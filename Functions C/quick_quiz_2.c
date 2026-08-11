/*Use the library function to calculate the area of a square with side a.*/
#include <stdio.h>
#include <math.h>
int main(){
    int a;
    printf("Enter the side of the square: ");
    scanf("%d",&a);
    printf("area of the square is: %f\n", pow(a,2));
    return 0;

}