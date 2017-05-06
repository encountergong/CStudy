//doubole的精度 
//任何编译习惯都有可能在这里产生 
///Apr/26/2017
#include<stdio.h>
int main(void)
{
    float a,b,c;
a=1.345f;
b=1.123f;
c=a+b;
if(c-2.468<1E-12){
    printf("相等");
} 
else{
    printf("不相等 %.10f %f",c,c);
}
    return 0;
} 