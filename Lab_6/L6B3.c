// This program gives types of triangle as per input of side by user
#include "stdio.h"
void main(){
    float a,b,c;
    printf("Enter a,b,c : ");
    scanf("%f %f %f",&a,&b,&c);
    if(a==b&&b==c&&a==c){
        printf("Equilateral Triangle");
    }
else if(a==b||b==c||a==c){
    printf("Isosceles Triangle");
}
else if(c*c==a*a+b*b||a*a==b*b+c*c||b*b==a*a+c*c){
    printf("Right Angled Triangle");
}
else{
printf("Scalene Triangle");
}
}