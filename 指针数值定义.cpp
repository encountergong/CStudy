//argc 
//任何编译习惯都有可能在这里产生 
///May/6/2017
#include<stdio.h>
int main(int argc,char const  *argv[] )
{
int i=0;
for(i;i<argc;i++){
    printf("a[%d]:%s\n",i,argv[i]);
    
}

	return 0;
} 
