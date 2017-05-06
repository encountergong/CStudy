//16/9精确到199位 数组法显示小数点后199位 
//任何编译习惯都有可能在这里产生 
///Apr/26/2017
#include<stdio.h>
#include<stdbool.h>
int main(void)
{

int a,b;
int x[200]={0};
int r=1;
int i=0;
int t=1;
///scanf("%d",&a,&b);
a=16;
b=19;
for(i;i<200;i++){
    
    x[i]=(a*10/b);
    a=(a*10%b);// 
} 
printf("0.")
for(i=0;i<200;i++){
    printf("%d",x[i]);
}

    return 0;
} 
