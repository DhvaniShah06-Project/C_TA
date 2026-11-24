//backlog more than 5

#include <stdio.h>

struct StudentRecord {
    int roll, backlog;
    char n[100];
};

int main() {
    int i, count = 0,n; 
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct StudentRecord s1[n];
    FILE *fp;
    
    fp = fopen("student.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Enter Details of Student %d\n", i + 1);
        
        printf("Enter Name : ");
        scanf(" %[^\n]", s1[i].n); 
        fprintf(fp, "Name: %s\n", s1[i].n);
        
        printf("Enter Roll No : ");
        scanf("%d", &s1[i].roll);
        fprintf(fp, "Roll No: %d\n", s1[i].roll);
        
        printf("Enter Backlog : ");
        scanf("%d", &s1[i].backlog);
        fprintf(fp, "Backlog: %d\n\n", s1[i].backlog);
    }
    fclose(fp);

   fp = fopen("student.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    struct StudentRecord temp;
    printf("\nStudents with more than 5 backlogs:\n");

    while (fscanf(fp, " Name: %[^\n] Roll No: %d Backlog: %d",
                  temp.n, &temp.roll, &temp.backlog) == 3) {
        if (temp.backlog > 5) {
            printf("Roll No: %d (Name: %s, Backlogs: %d)\n",
                   temp.roll, temp.n, temp.backlog);
            count++;
        }
    }

    fclose(fp);

    printf("\nTotal students with more than 5 backlogs: %d\n", count);
    return 0;
}
