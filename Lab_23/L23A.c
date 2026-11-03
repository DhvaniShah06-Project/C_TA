//backlog more than 5
#include <stdio.h>
struct Student{
    int roll,backlog;
    char n[100];
};
void main(){
    struct Student s1[3];
    int i,count;
    FILE*fp;
    fp=fopen("student.txt","a");
     for(i=0;i<3;i++){
        printf("Enter Details of Student %d\n",i+1);
        printf("Enter Name : ");
        scanf("%s",&s1[i].n);
        fprintf(fp," Name %s\n",s1[i].n);
        printf("Enter Roll No : ");
        scanf(" %d",&s1[i].roll);
        fprintf(fp,"Roll No %d\n",s1[i].roll);
        printf("Enter Backlog : ");
        scanf("%d",&s1[i].backlog);
       fprintf(fp,"Backlog %d\n",s1[i].backlog);
    }
    for(i=0;i<3;i++){
        if(s1[i].backlog>5){
            count++;
        }
    }
    printf("%d",count);
    }
