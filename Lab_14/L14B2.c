//average Mean Geometric Mean Harmonic Mean
#include <stdio.h>
#include <math.h>
void main(){
    int sum=0,i,n,b;
    float Average,Geometric,Harmonic,c=0.0,d;
    printf("Enter size : ");
    scanf("%d",&n);
    int a[n];
    float h[n];
    for(i=0;i<n;i++){
        printf("Enter Number : ");
        scanf("%d",&a[i]);
    }
    //Average Mean
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    Average=(float)sum/n;
    printf("Average Mean : %.2f",Average);
    //Geometric Mean
    for(i=0,b=1;i<n;i++){
      b=b*a[i];
    }
    d=(float)1/n;
    Geometric=(float)pow(b,d);
    printf("\nGeometric Mean : %.2f",Geometric);
//Harmonic Mean
for(i=0;i<n;i++){
        h[i]=a[i];
    }
float e;
for(i=0;i<n;i++){
    e=(float)(1/h[i]);
    c=c+e;
}
Harmonic=(float)n/c;
printf("\nHarmonic Meann : %.2f",Harmonic);
}
