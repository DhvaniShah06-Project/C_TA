// This program converts days to year,weeks,days
#include<stdio.h>
void main(){
    int y,w,day,days,a;
    printf("Enter value of days");
    scanf("%d",&days);
    y=days/365;
    a=days%365;
    w=a/7;
    day=a%7;
    printf("year %d week %d day %d",y,w,day);

}