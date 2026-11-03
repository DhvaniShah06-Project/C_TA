//student name percent age
#include <stdio.h>
struct Student{
    int Age;
    float Percent;
    char N[100];
};
void main(){
    int a,i;
    struct Student s1[5];
    for(i=0;i<5;i++){
        printf("Enter Details of Student %d\n",i+1);
        printf("Enter Name : ");
        scanf("%s",&s1[i].N);
        printf("Enter Age : ");
        scanf(" %d",&s1[i].Age);
        printf("Enter Percentage : ");
        scanf("%f",&s1[i].Percent);
    }
    
    for(i=0;i<5;i++){
        printf("Student Details for Student %d\n",i+1);
        printf("Name : %s\nAge : %d\nPercentage : %.3f\n",s1[i].N,s1[i].Age,s1[i].Percent);
    }
    }
