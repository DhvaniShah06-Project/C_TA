//5 input of height and weight from user 
#include <stdio.h>
void main(){
    int i=0,h[5],w[5];
    for(i=0;i<5;i++){
        printf("Enter Height : ");
        scanf("%d",&h[i]);
        printf("Enter Weight : ");
        scanf("%d",&w[i]);
    }
    for(i=0;i<5;i++){
        if(h[i]>170||(w[i]<50)){
            printf("Height %d\n",h[i]);
            printf("Weight %d\n",w[i]);
        }
        }
}
