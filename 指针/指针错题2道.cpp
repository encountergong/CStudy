//关于指针的2道错题 
//任何编译习惯都有可能在这里产生 
///May/6/2017
#include<stdio.h>
int main(void)
{
    int ch=0;
    while((ch=getchar())!=EOF){
        putchar(ch);
    }
    printf("EOF");
	return 0;
} 
