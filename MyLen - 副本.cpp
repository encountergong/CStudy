//我的string(Mylen) 
//任何编译习惯都有可能在这里产生 
///May/4/2017
#include<stdio.h>
#include<string.h> 
int mylen(const char *);

int main(void)
{
    char a[]="hello";
    printf("%lu\n",mylen(a));
	return 0;
} 
int mylen(const char *s)
{
    int c=0;
    int i=0;
    while(s[i]!=0){
        i++;
        
    }
    return i;
}
