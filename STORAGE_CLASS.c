#include<stdio.h>

int a=3,e;//global variable

void stat()
{
	static int c,d=1;
	int i;
	printf("\nIn stat\n");
	for(i=0;i<5;i++)
	{
		printf("%d %d\n",c++,d++);
	}
}

void reg()
{
	int f=3,g=4;
	a=f+g;//register
	a=a+10;
	printf("Now value of a is %d",a);
}

int main()
{
	int b=3,h,k;
	printf("\nLocal Value of b:%d",b);
	printf("\nLocal Value of h:%d (not initialized)",h);//local variable is not initialized by default it gives garbage value
	printf("\nLocal Value of k:%d (not initialized)",k);
	printf("\nGlobal value of a:%d",a);
	printf("\nGlobal value of e:%d (not initialized)",e);//global variable by default is 0

	stat();
	reg();
}


