//指针强制转换 
//任何编译习惯都有可能在这里产生 
///May/1/2017
#include<stdio.h>
int main(void)
{
  void* t;  //表示不知道指向什么东西的指针
  int i=1;
  int *p=&i;//p是int*既有4位的 
  void *q= (void*)p;//注意型号在括号里面  这意味着从q来看不再当I作int*而是void* ,而从p来看i依旧诗int* 
  return 0;
} 

