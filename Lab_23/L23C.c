//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    int backlog;
};

int parseAndReadData(struct Student s1[], const char *filename);
void modifyBacklogs(struct Student s1[], int count, int target_roll, int new_backlog);
void saveAndVerifyData(struct Student s1[], int count, const char *filename);

int main() {
    struct Student students[100]; 
    int count = 0;
    const char *filename = "student.txt";
    
    
    int target_roll = 5; 
    int new_backlog = 3;

    //  PART 23-A 
    count = parseAndReadData(students, filename);
    if (count == 0) {
        printf("Error: No valid student structures could be read from the file.\n");
        return 1;
    }

    //  PART 23-B 
   
    modifyBacklogs(students, count, target_roll, new_backlog);

   
    saveAndVerifyData(students, count, filename);

    return 0;
}

// PART 23-A:
int parseAndReadData(struct Student s1[], const char *filename) {
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Could not open file '%s' for reading.\n", filename);
        return 0;
    }

    int count = 0;
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
    return count; 
}

// PART 23-B: MODIFICATION FUNCTION
void modifyBacklogs(struct Student s1[], int count, int target_roll, int new_backlog) {
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (s1[i].roll_no == target_roll) {
            s1[i].backlog = new_backlog; // Update the student backlog
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Notice: Student with Roll No %d not found in records.\n", target_roll);
    }
}


// PART 23-B
void saveAndVerifyData(struct Student s1[], int count, const char *filename) {
    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Error: Could not open file for writing.\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        fprintf(fp, "Name %s\n", s1[i].name);
        fprintf(fp, "Roll No %d\n", s1[i].roll_no);
        fprintf(fp, "Backlog %d\n\n", s1[i].backlog);
    }
    fclose(fp);

    printf("\n=== VERIFYING CLEAN UPDATED DATA FROM FILE ===\n");
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Verification failed to open the file.\n");
        return;
    }

    char temp_name[50];
    int temp_roll, temp_backlog;
    while (fscanf(fp, " Name %49s Roll No %d Backlog %d", temp_name, &temp_roll, &temp_backlog) == 3) {
        printf("Student: %-10s | Roll No: %-3d | Updated Backlogs: %d\n", temp_name, temp_roll, temp_backlog);
    }
    fclose(fp);
}
