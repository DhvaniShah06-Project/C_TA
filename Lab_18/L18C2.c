// converts amount to words
#include <stdio.h>
#include <math.h>
void convert(int n, int digits);
void main()
{
    int n, digits;
    printf("Enter Amount : ");
    scanf("%d", &n);
    printf("Enter Digits : ");
    scanf("%d", &digits);
    convert(n, digits);
}
void convert(int n, int digits)
{
    int i, rem, j, temp, size = 0, k;
    temp = digits;
    for (; size <= temp && digits != 0; size++)
    {
        if (n >= 1000)
        {
            i = pow(10, digits - 1);
            rem = n / i;
            switch (rem)
            {
            case 1:
                printf("One");
                break;
            case 2:
                printf("Two");
                break;
            case 3:
                printf("Three");
                break;
            case 4:
                printf("Four");
                break;
            case 5:
                printf("Five");
                break;
            case 6:
                printf("Six");
                break;
            case 7:
                printf("Seven");
                break;
            case 8:
                printf("Eight");
                break;
            case 9:
                printf("Nine");
                break;
            }
            printf(" Thousand ");
            n = n - (rem * 1000);
            digits = digits - 1;
        }
        if (n < 1000 && n >= 100)
        {
            j = pow(10, digits - 1);
            rem = n / j;
            switch (rem)
            {
            case 1:
                printf("One");
                break;
            case 2:
                printf("Two");
                break;
            case 3:
                printf("Three");
                break;
            case 4:
                printf("Four");
                break;
            case 5:
                printf("Five");
                break;
            case 6:
                printf("Six");
                break;
            case 7:
                printf("Seven");
                break;
            case 8:
                printf("Eight");
                break;
            case 9:
                printf("Nine");
                break;
            }
            printf(" Hundred ");
            n = n - (rem * 100);
            digits = digits - 1;
        }
        if (n == 10 || n < 100 && n >= 20)
        {
            rem = n / 10;
            switch (rem)
            {
            case 1:
                printf("Ten");
                break;
            case 2:
                printf("Twenty");
                break;
            case 3:
                printf("Thirty");
                break;
            case 4:
                printf("Fourty");
                break;
            case 5:
                printf("Fifty");
                break;
            case 6:
                printf("Sixty");
                break;
            case 7:
                printf("Seventy");
                break;
            case 8:
                printf("Eighty");
                break;
            case 9:
                printf("Ninety");
                break;
            }
            n = n - (rem * 10);
            digits = digits - 1;
        }
        printf(" ");
        if (n < 20 && n != 10)
        {
            switch (n)
            {
            case 1:
                printf("One");
                break;
            case 2:
                printf("Two");
                break;
            case 3:
                printf("Three");
                break;
            case 4:
                printf("Four");
                break;
            case 5:
                printf("Five");
                break;
            case 6:
                printf("Six");
                break;
            case 7:
                printf("Seven");
                break;
            case 8:
                printf("Eight");
                break;
            case 9:
                printf("Nine");
                break;
            case 11:
                printf("Eleven");
                break;
            case 12:
                printf("Twelve");
                break;
            case 13:
                printf("Thirteen");
                break;
            case 14:
                printf("Fourteen");
                break;
            case 15:
                printf("Fifteen");
                break;
            case 16:
                printf("Sixteen");
                break;
            case 17:
                printf("Seventeen");
                break;
            case 18:
                printf("Eighteen");
                break;
            case 19:
                printf("Nineteen");
                break;
            }
            if (n > 10)
            {
                digits = digits - 2;
            }
            else
            {
                digits = digits - 1;
            }
        }
    }
}