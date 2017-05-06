//有sizeof检查编译器字节书 
//任何编码习惯都有可能在这里产生 
#include<stdio.h>
int main (void)
{
unsigned int a=10;
printf("char %d\n",sizeof(char));
printf("short %d\n",sizeof(short));
printf("\n");
printf("int %d\n",sizeof(int));
printf("float %d\n",sizeof(float)); 
printf("double %d\n",sizeof(double));
printf("\n");
printf("long %d\n",sizeof(int));
printf("long long %d\n",sizeof(long));
printf("long double %d\n",sizeof(double));

getchar();

return 0;
}
 