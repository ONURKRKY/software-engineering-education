#include<stdio.h>
#include<stdlib.h>

int main(){
	
	FILE * dd;
	int i,no;
	dd=fopen("nunbers.txt","r");
	if(dd==NULL)
	{
		printf("cannot open file");
	}
	else
	{
		while(fscanf(dd,"%d",&no)!=EOF)			
		printf("%d\n",no);
		fclose(dd);
	}
	
}
