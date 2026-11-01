//LEETCODE PROBLEM 14: LONGEST COMMON PREFIX
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* longestCommonPrefix(char** strs, int strsSize) {
    if(strsSize==0){
        char *empty=malloc(1);
        empty[0]='\0';       
        return empty;

    }
    for(int i=0;strs[0][i]!='\0';i++){
        char c=strs[0][i];
        for(int j=1;j<strsSize;j++){
            if(strs[j][i]!=c){
                char *result=malloc(i+1);
                strncpy(result,strs[0],i);
                result[i]='\0';
                return result;

            }


        }
    }
    return strs[0];
}
int main(){
    char *strs[]={"flower","flow","flight"};
    
    printf("%s",longestCommonPrefix(strs,3));
return 0;
}