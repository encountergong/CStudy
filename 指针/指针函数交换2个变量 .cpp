//ָ�뺯������2������ 
//�κα���ϰ�߶��п������������ 
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
