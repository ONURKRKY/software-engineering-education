#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *dd;
	int i,no;
	if((dd=fopen("mytext.txt","a"))==NULL)
	{
		printf("file does not exist.");
	}
	else
	{
		for(i=0;i<4;i++)
		{
		printf("%d. enter numeber",i);
		scanf("%d",&no);
		fprintf(dd,"%d\n",no);
		}
	}
	fclose(dd);
	
	
}
