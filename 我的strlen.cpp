//�Լ�ʵ�ֵ�strlen���� 
//�κα���ϰ�߶��п������������ 
///May/6/2017
#include<stdio.h>
#include<string.h> 
int myStr(char const *s1);
int main(void)
{
	char s1[] = "Hello";
	printf("%d\n", myStr(s1));
	getchar();
	return 0;
}
int myStr(char const *s1)
{
    int idx=0;
    while(s1[idx]!=0){
        idx++;
        
    }
return idx;
}
