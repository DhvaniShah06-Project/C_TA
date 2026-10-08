//manual implementation of strlen,strcpy,strcmp
#include <stdio.h>
void main(){
    int i,j,l1,l2,flag,len1=0,len2=0,c,k,b,a;
    char  s1[100],s2[100];
    printf("Enter String 1 : ");
    scanf("%[^\n]s",&s1);
    printf("Enter String 2 : ");
    scanf(" %[^\n]s",&s2);
    printf("Which string to be copied : ");
    scanf("%d",&a);
    //length
    for(i=0;s1[i]!='\0';i++){
    l1=l1+1;
    }
    for(j=0;s2[j]!='\0';j++){l2=l2+1;}
    printf("Length of String 1 : %d\nLength of String 2 : %d",l1,l2);
//string copy
if(a==1){
    for(c=0;s1[c]!='\0';c++){
    s2[c]=s1[c];
}
printf(" \n%s",s2);
}
if(a==2){
    for(k=0;s2[k]!='\0';k++){
        s1[k]=s2[k];
    }
    printf(" \n%s",s1);
}
//string comparison
    int max=(l1>=l2)?l1:l2;
    for(b=0;b<max;b++){
    if(s1[b]!=s2[b]||s1[b]>s2[b]||s1[b]<s2[b]){
            flag=1;
    }
    break;
         if(s1[b]==s2[b]){
                flag=0;
        }
        }

    if(flag==0){
                printf("\nBoth Strings are equal");
             }
             if(flag==1){
                printf("\nString 1 is not equal to String 2");
}
}
