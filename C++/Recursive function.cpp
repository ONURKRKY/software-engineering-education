#include<stdio.h>


int myfunc(int a);
int main()
{

int b;
b=myfunc(5);

printf("%d",b);

}
int myfunc(int a)
{
	int fact;
	if(a==1) return 1;
	fact=a*myfunc(a-1);	
	
}
