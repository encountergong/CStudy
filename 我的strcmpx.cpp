//strcpy函数 
//任何编译习惯都有可能在这里产生 
///May/6/2017
#include<stdio.h>
#include<string.h> 
int myCmp(char const *s1,const char *s2);
int main(void)
{
    char *s1="abcdd";
    char s2[]="hello";
    strcpy(s1,s2);
    while(*s1=0){
        
        *s1=*s2;
        s1++;
        s2++;
    }
    printf("%c",s1[]);   
    return 0;
}
