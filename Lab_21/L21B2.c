#include <stdio.h>
struct Bdate{
    int day;
    int month,year;
};
struct Student{
    char sname[100];
    int rollno;
    struct Bdate b;
};
void main(){
struct Student s1;
scanf("%d",&s1.b.day);
scanf("%d",&s1.b.month);
scanf("%d",&s1.b.year);
printf("Date : %d Month %d Year %d",s1.b.day,s1.b.month,s1.b.year);
}
    