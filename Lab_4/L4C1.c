// This program converts seconds into hr,sec,min
#include <stdio.h>
void main(){
    int hr,min,sec,r,s;
    sec=10000;
    hr=sec/3600;
   r=sec%3600;
   min=r/60;
   s=r%60;
 printf("Hour : %d Minute : %d Second : %d",hr,min,s);
   


}