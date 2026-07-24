//This program os for finding colors using rgb format
#include "stdio.h"
void main(){
    float r,g,b,White,Cyan,Magneta,Yellow,Black,red,green,blue;
    printf("Enter range for color red green and blue from 0 to 255 : ");
    scanf("%f %f %f",&r,&g,&b);
    if(r==0&&g==0&&b==0){
        Cyan=Magneta=Yellow=0.0;
        Black=1;
        printf("Cyan=0");
        printf("\nMagneta=0");
        printf("\nYellow=0");
        printf("\nBlack=1");
    }
    else{
    red=r/255;
    green=g/255;
    blue=b/255;
     if(red>green&&red>blue){
        White = red;
    }
    else if(green>red&&green>blue){
        White = green;
    }
    else if(blue>red&&blue>green){
        White = blue;
    }
    Cyan=(White-red)/White;
    Magneta=(White-green)/White;
    Yellow=(White-blue)/White;
    Black=1-White;
printf("White : %.2f",White);
    printf("\nCyan : %.2f",Cyan);
    printf("\nMagneta : %.2f",Magneta);
    printf("\nYellow : %.2f",Yellow);
    printf("\nBlack : %.2f",Black);
    }
}