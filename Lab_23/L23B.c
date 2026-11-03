//Now modify the backlogs of any 1 student to 3 and store the data into file again and verify the data
//stored into file by printing onto console

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    int backlog;
};

int main() {
    FILE *fp;
    struct Student s1[100];
    int count = 0;
    
    int target_roll = 5; 
    int found = 0;


    fp = fopen("student.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    char token[100];
    
    while (fscanf(fp, "%99s", token) != EOF) {
    
        if (strcmp(token, "Name") == 0) {
            
            if (fscanf(fp, "%49s", s1[count].name) == 1) {
                
            
                fscanf(fp, "%*s %*s %d", &s1[count].roll_no);
                
            
                fscanf(fp, "%*s %d", &s1[count].backlog);
                
            
                if (s1[count].roll_no > 0 && s1[count].backlog >= 0) {
                    count++;
                }
            }
        }
    }
    fclose(fp);

    if (count == 0) {
        printf("No valid student structures could be extracted from your file.\n");
        return 1;
    }

    
    for (int i = 0; i < count; i++) {
        if (s1[i].roll_no == target_roll) {
            s1[i].backlog = 3;
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Target Roll No %d not found in records.\n", target_roll);
    }

    fp = fopen("student.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    for (int i = 0; i < count; i++) {
        fprintf(fp, "Name %s\n", s1[i].name);
        fprintf(fp, "Roll No %d\n", s1[i].roll_no);
        fprintf(fp, "Backlog %d\n\n", s1[i].backlog);
    }
    fclose(fp);

    printf("\n=== VERIFYING CLEAN UPDATED DATA FROM FILE ===\n");
    fp = fopen("student.txt", "r");
    if (fp == NULL) {
        return 1;
    }

    char name[50];
    int roll, backlog;
    while (fscanf(fp, " Name %49s Roll No %d Backlog %d", name, &roll, &backlog) == 3) {
        printf("Student: %-10s | Roll No: %-3d | Backlogs: %d\n", name, roll, backlog);
    }
    fclose(fp);

    return 0;
}
