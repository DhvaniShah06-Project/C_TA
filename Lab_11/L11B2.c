// frequency of digits
#include <stdio.h>
void main()
{
    int n, temp, rem, counta = 0, countb = 0, countc = 0, countd = 0, counte = 0, countf = 0, countg = 0, counth = 0, counti = 0, countj = 0;
    printf("Enter n : ");
    scanf("%d", &n);
    temp = n;
    for (; n != 0;)
    {
        int rem = n % 10;
        n = n / 10;
        switch (rem)
        {
        case 1:
            counta = counta + 1;
            printf("Frequency of %d : %d\n", rem, counta);
            break;
        case 2:
            countb = countb + 1;
            printf("Frequency of %d : %d\n", rem, countb);
            break;
        case 3:
            countc = countc + 1;
            printf("Frequency of %d : %d\n", rem, countc);
            break;
        case 4:
            countd = countd + 1;
            printf("Frequency of %d : %d\n", rem, countd);
            break;
        case 5:
            counte = counte + 1;
            printf("Frequency of %d : %d\n", rem, counte);
            break;
        case 6:
            countf = countf + 1;
            printf("Frequency of %d : %d\n", rem, countf);
            break;
        case 7:
            countg = countg + 1;
            printf("Frequency of %d : %d\n", rem, countg);
            break;
        case 8:
            counth = counth + 1;
            printf("Frequency of %d : %d\n", rem, counth);
            break;
        case 9:
            counti = counti + 1;
            printf("Frequency of %d : %d\n", rem, counti);
            break;
        case 0:
            countj = countj + 1;
            printf("Frequency of %d : %d\n", rem, countj);
            break;
        }
    }
}