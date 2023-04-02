#include<iostream>
#include<string.h>


int  topla( int dizi[]);

int main()
{
	int dizi[]={2,3,4,5};
	
	int c;
	c=topla(dizi);
	 printf("%d",c);	
	return 0;
}

int  topla( int dizi[])
{
	int toplam;
	
	for(int i=0;i<4;i++)
	{
		toplam+*(dizi+i);
		
	}
	return toplam;
};
