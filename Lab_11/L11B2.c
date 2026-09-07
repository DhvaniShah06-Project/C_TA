#include "stdio.h"

void main()
{
    int n, num, c0 = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, c7 = 0, c8 = 0, c9 = 0;
    printf("Enter number : ");
    scanf("%d", &n);
    /*can do code with number n also for(;n>0;n/=10) but this is not a good practice as it will change the value
     of n and we may need it later
     in the program so better to use another variable i to store the value of n and use it in the loop*/
    for (int i = n; i > 0; i /= 10)
    {
        num = i % 10;
        switch (num) // can also use switch(i%10) no need for num but this is a good practice to make code more readable
        {
        case 0:
            c0++;
            break;
        case 1:
            c1++;
            break;
        case 2:
            c2++;
            break;
        case 3:
            c3++;
            break;
        case 4:
            c4++;
            break;
        case 5:
            c5++;
            break;
        case 6:
            c6++;
            break;
        case 7:
            c7++;
            break;
        case 8:
            c8++;
            break;
        case 9:
            c9++;
            break;
        }
    }
    if (c0 > 0)
        printf("Frequency of 0 : %d\n", c0);
    if (c1 > 0)
        printf("Frequency of 1 : %d\n", c1);
    if (c2 > 0)
        printf("Frequency of 2 : %d\n", c2);
    if (c3 > 0)
        printf("Frequency of 3 : %d\n", c3);
    if (c4 > 0)
        printf("Frequency of 4 : %d\n", c4);
    if (c5 > 0)
        printf("Frequency of 5 : %d\n", c5);
    if (c6 > 0)
        printf("Frequency of 6 : %d\n", c6);
    if (c7 > 0)
        printf("Frequency of 7 : %d\n", c7);
    if (c8 > 0)
        printf("Frequency of 8 : %d\n", c8);
    if (c9 > 0)
        printf("Frequency of 9 : %d\n", c9);
}