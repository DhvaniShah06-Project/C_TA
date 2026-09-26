#include "Dhvanistr.h"

int main() {
    int choice;
    char s1[100], s2[100], result[200];

    printf("Menu:\n");
    printf("1. Find length\n");
    printf("2. Copy string\n");
    printf("3. Concatenate string\n");
    printf("4. Compare string\n");
    printf("Enter your choice : ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter string : ");
            scanf("%s", s1);
            printf("Length = %d\n", lengthOfString(s1));
            break;

        case 2:
            printf("Enter string to copy : ");
            scanf("%s", s1);
            copyString(s2, s1);
            printf("Copied string = %s\n", s2);
            break;

        case 3:
            printf("Enter first string : ");
            scanf("%s", s1);
            printf("Enter second string : ");
            scanf("%s", s2);
            strcpy(result, s1);
            concatenateString(result, s2);
            printf("Concatenated string = %s\n", result);
            break;

        case 4:
            printf("Enter first string : ");
            scanf("%s", s1);
            printf("Enter second string : ");
            scanf("%s", s2);
            printf("Compare result = %d\n", compareString(s1, s2));
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
            