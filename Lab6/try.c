#include <stdio.h>
#include <string.h>


int main(){
    int find(char x)
    {   
        for(int i=0;sub_str[i]!=' ';i++){
            if(sub_str[i]==x){return i;}
        }
        return -1;
    }
    char big_str[1000];
    char sub_str[50];
    gets(big_str);
    scanf("%s",sub_str);
    int find(char x)
    {   
        for(int i=0;sub_str[i]!=' ';i++){
            if(sub_str[i]==x){return i;}
        }
        return -1;
    }
    int A = strlen(sub_str)+1;
    int value[3]={0}; //initialize all the value to zero
    value[0]=1;
    for(int i=0;big_str[i]!=' ';i++){
        char x=big_str[i];
        int pos=find(big_str[i])+1;
        if(pos==0){continue;}
        value[pos]+=value[pos-1];
    }
    printf("%d",value[strlen(sub_str)]);
}