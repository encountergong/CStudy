//ָ���1 
//�κα���ϰ�߶��п������������ 
///May/1/2017
#include<stdio.h>
int Divide(int a[]);
    


int main(void)
{
char ac[]={1,2,3,4,5,6,};
int ai[]={1,2,3,4,5,6,};

char *p=&ac[0];
int *q=&ai[0];


printf("ָ���ַ��1:\n"); 
printf("p=%p (p+1)=%p\n",p,p+1);
printf("q=%p (q+1)=%p\n",q,q+1);//ָ���ַ��1 
printf("\n");

printf("ָ��ָ��������1\n");
printf("*p=%d (*p+1)=%d\n",*p,*p+1);
printf("*q=%d (*q+1)=%d\n",*q,*q+1);//ָ��ָ��������1
printf("\n");

printf("ָ����ָ�����\n");
char *p1=&ac[4];
int *q1=&ai[100];
printf("%d\n",p1-p);
printf("%d\n",q1-q); //ָ����ָ�����

  return 0;
} 

