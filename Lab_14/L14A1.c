//read n numbers from user and print in normal and reverse order
#include <stdio.h>
void main(){
    int n,i,j;
    printf("How many Numbers : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
    printf("Enter Numbers : ");
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
    printf("Number In Original Form :  %d\n",a[i]);   
}
j=n-1;
for(j=n-1;j>=0;j--){
    printf("Number In Reverse Form : %d\n",a[j]);
   }
}