//doubole�ľ��� 
//�κα���ϰ�߶��п������������ 
///Apr/26/2017
#include<stdio.h>
int main(void)
{
    float a,b,c;
a=1.345f;
b=1.123f;
c=a+b;
if(c-2.468<1E-12){
    printf("���");
} 
else{
    printf("����� %.10f %f",c,c);
}
    return 0;
} 