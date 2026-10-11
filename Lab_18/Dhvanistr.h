#define DHVANISTR_H

#include <stdio.h>
#include <string.h>

// Returns the length of the string
int lengthOfString(char *s) {
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    return len;
}

// Copies string s2 into s1
void copyString(char *s1, char *s2) {
    int i = 0;
    while (s2[i] != '\0') {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
}

// Appends string s2 to the end of s1
void concatenateString(char *s1, char *s2) {
    int i = 0, j = 0;
    while (s1[i] != '\0') {
        i++;
    }
    while (s2[j] != '\0') {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
}

// Compares two strings lexicographically
static int compareString(char *s1, char *s2) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return s1[i] - s2[i];
        }
        i++;
    }
    return s1[i] - s2[i];
}

