// converts number to words
#include <stdio.h>
void main(){
    int n,i=0,sum=0,rem,count;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Enter number of digits in number : ");
    scanf("%d",&count);
    while(n!=0){
        int rem=n%10;
        sum=(sum*10)+rem;
        n=n/10;
    }
while(i<count){
int rem=sum%10;
sum=sum/10;
switch(rem){
    case 1:
    printf(" One");
    i=i+1;
    break;
    case 2:
    printf(" Two");
     i=i+1;
    break;
    case 3:
    printf(" Three");
     i=i+1;
    break;
    case 4:
    printf(" Four");
     i=i+1;
    break;
    case 5:
    printf(" Five");
     i=i+1;
    break;
    case 6:
    printf(" Six");
     i=i+1;
    break;
    case 7:
    printf(" Seven");
     i=i+1;
    break;
    case 8:
    printf(" Eight");;
     i=i+1;
    break;
    case 9:
    printf(" Nine");
     i=i+1;
    break;
    case 0:
    printf(" Zero");
     i=i+1;
    break;
}
}
}