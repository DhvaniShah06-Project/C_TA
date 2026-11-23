#include <stdio.h>

struct StudentRecord {
    int roll, backlog;
    char n[100];
};

// Function declarations (prototypes)
int readStudents(struct StudentRecord s[]);
void countHighBacklogs(struct StudentRecord s[], int count);
void modifyBacklog(struct StudentRecord s[], int count, int target_roll);
void saveAndVerify(struct StudentRecord s[], int count);

int main() {
    // Local structure array (NOT global)
    struct StudentRecord students[100];
    int count, target_roll;

    // 1. Read existing students from student.txt
    count = readStudents(students);
    if (count == 0) {
        printf("No records found in student.txt!\n");
        return 1;
    }

    // 2. Part 23-A: Count students with backlog > 5
    countHighBacklogs(students, count);

    // 3. Part 23-B: Modify 1 student's backlog to 3, save, and verify
    printf("\nEnter Roll No of student to change backlog to 3: ");
    scanf("%d", &target_roll);

    modifyBacklog(students, count, target_roll);
    saveAndVerify(students, count);

    return 0;
}

//  Read data from existing student.txt
int readStudents(struct StudentRecord s[]) {
    FILE *fp = fopen("student.txt", "r");
    if (fp == NULL) {
        printf("Error opening student.txt!\n");
        return 0;
    }

    int count = 0;
    char skip1[20], skip2[20]; 

    // Reads "Name:" into skip1, then full name into s[count].n
    while (fscanf(fp, "%s %[^\n]", skip1, s[count].n) == 2) {
        fscanf(fp, "%s %s %d", skip1, skip2, &s[count].roll); // Skips "Roll" "No:"
        fscanf(fp, "%s %d", skip1, &s[count].backlog);        // Skips "Backlog:"
        count++;
    }

    fclose(fp);
    return count; // Send total count back to main()
}

//(Part 23-A): Count backlogs > 5
void countHighBacklogs(struct StudentRecord s[], int count) {
    int high = 0;
    for (int i = 0; i < count; i++) {
        if (s[i].backlog > 5) {
            high++;
        }
    }
    printf("Students with more than 5 backlogs: %d\n", high);
}

//  (Part 23-B): Change target student's backlog to 3
void modifyBacklog(struct StudentRecord s[], int count, int target_roll) {
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (s[i].roll == target_roll) {
            s[i].backlog = 3;
            found = 1;
            break;
        }
    }
    if (found == 0) {
        printf("Roll No %d not found!\n", target_roll);
    }
}

// (Part 23-B): Save updated list to file & print from file
void saveAndVerify(struct StudentRecord s[], int count) {
    FILE *fp = fopen("student.txt", "w");
    for (int i = 0; i < count; i++) {
        fprintf(fp, "Name: %s\n", s[i].n);
        fprintf(fp, "Roll No: %d\n", s[i].roll);
        fprintf(fp, "Backlog: %d\n\n", s[i].backlog);
    }
    fclose(fp);

    printf("\n--- Verifying Updated Data from File ---\n");
    fp = fopen("student.txt", "r");
    char skip1[20], skip2[20];
    for (int i = 0; i < count; i++) {
        fscanf(fp, "%s %[^\n]", skip1, s[i].n);
        fscanf(fp, "%s %s %d", skip1, skip2, &s[i].roll);
        fscanf(fp, "%s %d", skip1, &s[i].backlog);

        printf("Name: %s | Roll No: %d | Backlog: %d\n", s[i].n, s[i].roll, s[i].backlog);
    }
    fclose(fp);
}
