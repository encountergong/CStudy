//指针函数交换2个变量 
//任何编译习惯都有可能在这里产生 
///Apr/29/2017
#include<stdio.h>
#include<stdbool.h>
int swap(int *pa,int *pb);
int main(void)
{

int a,b;
a=16;
b=19;
swap(&a,&b);
printf("a=%d b=%d",a,b);
    return 0;
} 
int swap(int *pa,int *pb)
{
    int t=0;
    t=*pa;
    *pa=*pb;
    *pb=t;
    return 0;
} 
