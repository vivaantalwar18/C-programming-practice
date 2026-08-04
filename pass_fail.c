// Write a program to determine whether a student has passed or failed. To pass, a student requires a total of 40% and at least 33% in each subject. 
//Assume there are three subjects and take the marks as input from the user.
#include <stdio.h>
int main(){
    int phy, chem, math;
    printf("enter marks in phy: ");
    scanf("%d", &phy);
    printf("enter marks in chem: ");
    scanf("%d", &chem);
    printf("enter marks in math: ");
    scanf("%d", &math);
   if (phy<33||chem<33||math<33){
       printf(" you have failed due to less marks in inddividual subjects");
   }
   else if ((phy+chem+math)/3 <40){
       printf("you have failed due to less marks overall");
   }
   else{
       printf("you are passed");
   }
    return 0;
}