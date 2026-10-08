//manual implementation of strncmp(), strncpy(),strncat()
#include <stdio.h>
void main(){
    int i,n,flag,len1,len2,k,j;
    char string1[100],string2[100],s1[100],s2[100];
    printf("Enter String 1 : ");
    scanf("%[^\n]s",string1);
 printf("Enter String 2 : ");
    scanf(" %[^\n]s",string2);
     for(i=0;string1[i]!='\0';i++)
     {s1[i]=string1[i];}
     for(j=0;string2[j]!='\0';j++){s2[j]=string2[j];}
printf("Enter n : ");
scanf("%d",&n);//strncmp
    for(len1=0;len1<n;len1++);
    for(len2=0;len2<n;len2++);
    int max=(len1>len2)?len1:len2;
    for(i=0;i<max;i++){
    if(string1[i]!=string2[i]||string1[i]>string2[i]||string1[i]<string2[i]){
            flag=1;
            }
            if(string1[i]==string2[i]){
                flag=0;
            }
        }
    if(flag==1){
                printf("Both Strings are not equal");
             }
             if(flag==0){
                printf("String 1 is equal to String 2");
}//string concenetate
    for(i=0;i<n;i++){
    }
    for(j=0;j<n;j++){
        string1[i]=string2[j];
        i=i+1;
        }
        string1[i]='\0'; 
        printf("\nConcenetate : %s",string1);
printf(" \n%s %s",s1,s2);
//strncopy
 for(k=0;k<n;k++){
    s1[k]=s2[k];
 }
 s1[k]='\0';
printf("\nCopy String : %s",s1); 
}