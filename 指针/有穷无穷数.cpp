//allocated 
//任何编译习惯都有可能在这里产生 
///May/4/2017
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int number=1;
int i=0;

int *a;
a=(int*)(malloc(number*sizeof(int)));
for(i=0;i<number;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<number;i++){
    printf("%d",a[i]);
}
free(a);
  return 0;
} 
