// This program is about giving class as per result
#include <stdio.h>
void main(){
    float a,b,c,d,e,result;
    printf("Enter marks for 5 Subjects");
    printf("Enter mark for Subject 1 :  ") 
    scanf("%f",&a);
    printf("Enter mark for Subject 2 :  ") 
    scanf("%f",&b);
    printf("Enter mark for Subject 3 :  ") 
    scanf("%f",&c);
    printf("Enter mark for Subject 4 :  ") 
    scanf("%f",&d);
    printf("Enter mark for Subject 5 :  ") 
    scanf("%f",&e);
result=a+b+c+d+e;
result=result/5;
if(70<result&&result<=100){
    printf("Result : Distinction");
}
else if(61<result&&result<=70){
    printf("Result : First Class");
}
else if(46<result&&result<=60){
    printf("Result : Second Class");
}
else if (36<result&&result<=45){
    printf("Result : Pass Class");
}
else if(result<=35){
    printf("Result : Fail");
}
}