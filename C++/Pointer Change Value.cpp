#include<iostream>


int main()
{
	int a=100;
	int *p;
	p=&a;
	printf("value of a:%d\n",a);
	printf("address of a:%d\n",p);
	*p=40;//(address will be same but the value is changed by code (*p) )
	printf("value of a:%d\n",a);
	printf("address of a:%d\n",p);
	return 0;
}
