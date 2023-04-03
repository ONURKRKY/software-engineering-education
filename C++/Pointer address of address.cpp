#include<iostream>

int main()
{
	int *p;
	int **pp;
	int a=10;
	
	p=&a;
	pp=&p;//(memory address of the the address);
	printf("a value:%d\n",a);	
	printf("p value:%p\n",p);	
	printf("pp value:%p\n",pp);
}
