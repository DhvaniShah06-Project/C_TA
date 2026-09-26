//sort array using pointers
#include <stdio.h>
void main(){
     int i,n,j,*p,c;
    printf("Enter size : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter Number : ");
        scanf("%d",&a[i]);
    }
    *p=a[0];
     for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }  
        }
        *(p+i)=a[i];

}

for(i=0;i<n;i++){
    printf("%d ",*(p+i));
}
}