// gives roots of equation
#include <stdio.h>
#include <math.h>
void main()
{
    float a, b, c, x, y, D;
    printf("Enter value of a,b,c : ");
    scanf("%f %f %f", &a, &b, &c);
    D = ((b * b) - (4 * a * c));
    if (D > 0)
    {
        x = ((-b + (sqrt(D))) / (2 * a));
        y = ((-b - (sqrt(D))) / (2 * a));
        printf("Roots of Equation are : \nx = %f\ny = %f ", x, y);
    }
    else if (D == 0)
    {
        x = ((-b) / (2 * a));
        printf("Roots of Equation are : \nx = %f\nx = %f", x, x);
    }
    else if (D < 0)
    {
        printf("Imaginary roots");
    }
}