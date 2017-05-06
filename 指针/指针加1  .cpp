//指针加1 
//任何编译习惯都有可能在这里产生 
///May/1/2017
#include<stdio.h>
int Divide(int a[]);
    


int main(void)
{
char ac[]={1,2,3,4,5,6,};
int ai[]={1,2,3,4,5,6,};

char *p=&ac[0];
int *q=&ai[0];


printf("指针地址加1:\n"); 
printf("p=%p (p+1)=%p\n",p,p+1);
printf("q=%p (q+1)=%p\n",q,q+1);//指针地址加1 
printf("\n");

printf("指针指向的数组加1\n");
printf("*p=%d (*p+1)=%d\n",*p,*p+1);
printf("*q=%d (*q+1)=%d\n",*q,*q+1);//指针指向的数组加1
printf("\n");

printf("指针与指针相减\n");
char *p1=&ac[4];
int *q1=&ai[100];
printf("%d\n",p1-p);
printf("%d\n",q1-q); //指针与指针相减

  return 0;
} 

