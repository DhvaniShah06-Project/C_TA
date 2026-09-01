#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, temp, rem;

    printf("Enter an integer: ");
    scanf("%d", &n);
    

    printf("\nFrequency of digits in %d:\n", n);

    // Process each digit from 0 to 9 one by one
    for (int digit = 0; digit <= 9; digit++) {
        int count = 0;
        temp = abs(n); // Reset to original input and handle negative numbers

        // Special case: handle input 0 for the digit 0
        if (temp == 0 && digit == 0) {
            count = 1;
        } else {
            // Loop through the integer to count current digit matches
            while (temp != 0) {
                rem = temp % 10;
                if (rem == digit) {
                    count++;
                }
                temp = temp / 10;
            }
        }

        // Print final result only if the digit exists in the number
        if (count > 0) {
            printf("Digit %d occurs %d time\n", digit, count);
        }
    }

    return 0;
}
