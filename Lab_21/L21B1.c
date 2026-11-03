#include <stdio.h>
struct Student{
char sname[100];
int rollno;
};
void main(){
    int a;
struct Student *ptr;
    struct Student s1;
    ptr=&s1;
    printf("Enter Name : ");
    scanf("%s",&ptr->sname);
    printf("Enter Roll No. : ");
    scanf("%d",&ptr->rollno);
    printf("Name : %s Roll No. : %d",ptr->sname,ptr->rollno);
    }