/*
	./a.out 10 20
	o/p -> 30 printed from parent process
*/
#include <stdio.h>
main(int argc,char* argv[])
{
  int sum;
	if(argc != 3)
	{
	  printf("usage: %s <int1> <int2>\n",argv[0]);
	  return;
	}
	
	if(vfork()==0)  //vfork() to execute child first and memory are shared between parent-child
	{
		sum=atoi(argv[1])+atoi(argv[2]);
	}
	else
	{
		printf("in parent sum=%d\n",sum);
	}
}