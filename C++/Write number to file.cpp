#include<stdio.h>
#include<stdlib.h>

int main(){
	
	FILE * dd;
	int i,no;
	dd=fopen("nunbers.txt","w");
	if(dd==NULL)
	{
		printf("cannot open file");
	}
	else
	{
		for(int i=1;i<5;i++)
		{
			printf("enter %d. number:",i);
			scanf("%d",&no);
			fprintf(dd,"%d\n",no);
		}
		fclose(dd);
	}
	
}
