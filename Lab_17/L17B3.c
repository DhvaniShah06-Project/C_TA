// add two matrix using pointers
#include <stdio.h>
void main(){
    int i,j,r,c,sum;
    printf("Enter size : ");
    scanf("%d %d",&r,&c);
      int a[r][c],b[r][c],add[r][c],*ptr1[r],*ptr2[r];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter value of matrix a : ");
            scanf("%d",&a[i][j]);
        }
        ptr1[i]=*(a+i);
    
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
printf("Enter value of matrix b : ");
scanf("%d",&b[i][j]);
        }
        ptr2[i]=*(b+i);
        
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            add[i][j]=(*(ptr1[i]+j)) + (*(ptr2[i]+j));
            printf("%d ",add[i][j]);
        }
        printf("\n");
    }
}
