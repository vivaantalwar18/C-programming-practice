#include <stdio.h>
void main(){
    int m,y,t=0,feb;
    printf("Enter the number of months: ");
    scanf("%d",&m);
    printf("Enter the year: ");
    scanf("%d",&y);
    if ((y%4==0 && y%100!=0)||(y%400==0))
        feb=29;
    else
        feb=28;
    if(m==1)
        t=31;
    else if(m==2)
        t=31+feb;
    else if(m==3)
        t=feb+62;
    else if(m==4)
        t=feb+92;
    else if(m==5)
        t=feb+123;
    else if(m==6)
        t=feb+153;
    else if(m==7)
        t=feb+184;
    else if(m==8)
        t=feb+215;
    else if(m==9)
        t=feb+245;
    else if(m==10)
        t=feb+276;
    else if(m==11)
        t=feb+306;
    else if(m==12)
        t=feb+337;
    printf("Total number of days = %d",t);
}