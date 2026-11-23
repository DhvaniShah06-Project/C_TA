#include <stdio.h>

struct StudentRecord {
    int roll, backlog;
    char n[100];
};

int main() {
    struct StudentRecord s[100];
    FILE *fp;
    int count = 0, i, target_roll;
    char skip1[20], skip2[20]; // Simple variables to skip label words

    // --- STEP 1: Read data from student.txt ---
    fp = fopen("student.txt", "r");


    // Read "Name:" into skip1, then read the full name (with spaces) until Enter
    while (fscanf(fp, "%s %[^\n]", skip1, s[count].n) == 2) {
        fscanf(fp, "%s %s %d", skip1, skip2, &s[count].roll); // Skips "Roll" "No:"
        fscanf(fp, "%s %d", skip1, &s[count].backlog);        // Skips "Backlog:"
        count++;
    }
    fclose(fp);

    // --- STEP 2: Ask which student to update & change backlog to 3 ---
    printf("Enter Roll No of student to change backlog to 3: ");
    scanf("%d", &target_roll);

    for (i = 0; i < count; i++) {
        if (s[i].roll == target_roll) {
            s[i].backlog = 3;
        }
    }

    // --- STEP 3: Write updated data back into student.txt ---
    fp = fopen("student.txt", "w");
    for (i = 0; i < count; i++) {
        fprintf(fp, "Name: %s\n", s[i].n);
        fprintf(fp, "Roll No: %d\n", s[i].roll);
        fprintf(fp, "Backlog: %d\n\n", s[i].backlog);
    }
    fclose(fp);

    
    printf("\n--- Updated Data from File ---\n");
    fp = fopen("student.txt", "r");
    for (i = 0; i < count; i++) {
        fscanf(fp, "%s %[^\n]", skip1, s[i].n);
        fscanf(fp, "%s %s %d", skip1, skip2, &s[i].roll);
        fscanf(fp, "%s %d", skip1, &s[i].backlog);

        printf("Name: %s | Roll No: %d | Backlog: %d\n", s[i].n, s[i].roll, s[i].backlog);
    }
    fclose(fp);

    return 0;
}
