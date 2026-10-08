//Using a String pointer remove a space and special character from string 
#include <stdio.h>
void main(){
    char s[100],*p,st[100];
    int i,j=0,k=0;
    printf("Enter String : ");
    scanf("%[^\n]s",s);
    p=s;
    for(i=0;s[i]!='\0';i++){
        if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'){
            s[k]=*(p+i);k++;
        }
        else{st[j]=s[i];j++;}
    }
    s[k]='\0';
    printf(" %s",s);
}
/*for(i=0;s[i]!='\0';i++){
        if((s[i]>=32&&s[i]<=47)||(s[i]>=58&&s[i]<=64)||s[i]>=91&&s[i]<=96||s[i]>=123&&s[i]<=126){//32 ascii value space
        st[j]=s[i];j++;
        }
       else{
           s[k]=*(p+i);k++;
        }
    }*/