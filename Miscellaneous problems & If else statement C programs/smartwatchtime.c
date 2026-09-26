#include <stdio.h>
int main(){
    int sec,hh,mm,ss;
    printf("Enter the time in Seconds: ");
    scanf("%d",&sec);
    hh=sec/3600;
    mm=(sec-hh*3600)/60;
    ss=sec-hh*3600-mm*60;
    printf("Time = %d Hours %d Minutes %d Seconds",hh,mm,ss);
    return 0;
}