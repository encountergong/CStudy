//指针判断最大最小数 
//任何编译习惯都有可能在这里产生 
///Apr/27/2017
#include<stdio.h>
#include<stdbool.h>
int Minmax( int a[],int len,int *min,int *max);
int main(void)
{

int a[]={1,2,3,4,5,6,7,8,9,11,12,13,14,15,16,17,18,19,};

int min,max;

Minmax(a,sizeof(a)/sizeof(a[0]), &min, &max );
printf("%d %d",min,max);

    return 0;
} 
int Minmax( int a[],int len,int *min,int *max)
{
    int i=0;
    *min=a[0];
    *max=a[0];
    for(i;i<len;i++){
        if(a[i]<*min){
            *min=a[i] ;
        }
        if(a[i]>*max){
            *max=a[i];
        }
    }
    
    return 0;
}

