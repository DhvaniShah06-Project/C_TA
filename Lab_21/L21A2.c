//3 books author publication and price
#include <stdio.h>
struct Books{
    float Price;
    char Name[100],Author[100],Publication[100];
};
void main(){
    int a,i;
    struct Books b1[3];
    for(i=0;i<3;i++){
        printf("Enter Details For Book %d:\n",i+1);
        printf("Enter Name : ");
        scanf("%s",&b1[i].Name);
        printf("Enter Author : ");
        scanf(" %s",&b1[i].Author);
        printf("Enter publication : ");
        scanf(" %s",&b1[i].Publication);
         printf("Enter Price : ");
        scanf(" %f",&b1[i].Price);
    }
    for(i=0;i<3;i++){
        printf("Book Details for Book %d\n",i+1);
        printf("Book Name : %s Author Name : %s Publication name : %s Price Of Book : %.3f\n",b1[i].Name,b1[i].Author,b1[i].Publication,b1[i].Price);
    }
}