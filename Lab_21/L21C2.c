//Add two times hh, mm and ss using structure
#include <stdio.h>
struct time{
    int Hr,Min,Sec;
};
void main(){
    int a,i,add,h,m,s;
    struct time t1,t2;
        printf("Enter TIME 1 : ");
        scanf("%d %d %d",&t1.Hr,&t1.Min,&t1.Sec);
        printf("Enter TIME 2 : ");
        scanf("%d %d %d",&t2.Hr,&t2.Min,&t2.Sec);
  add=(t1.Hr+t2.Hr)*3600+(t1.Min+t2.Min)*60+t1.Sec+t2.Sec;
h=add/3600;
m=add%3600;
m=m/60;
s=add%60;
printf("Hour : %d Minutes : %d Seconds : %d",h,m,s);
}