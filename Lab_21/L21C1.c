#include <stdio.h>
struct Distance{
    int Feet,Inches;
};
void main(){
    int a,add,q,r;
    struct Distance d1,d2;
    printf("Enter 1st Distance : \n");
    printf("Enter Feet : ");scanf("%d",&d1.Feet);
    printf("Enter Inch : ");
    scanf("%d",&d1.Inches);
    printf("Enter 2nd Distance : \n");
     printf("Enter Feet : ");scanf("%d",&d2.Feet);
    printf("Enter Inch : ");
 scanf("%d",&d2.Inches);
    add=d1.Inches+d2.Inches+d1.Feet+d2.Feet;
q=add/12;
r=add%12;
printf("Feet : %d Inches : %d",q,r);
}