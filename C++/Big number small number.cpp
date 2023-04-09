#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
	FILE *fp;
	fp=fopen("sayi.txt","r");
	int crs,number,bnumber,snumber,counter;
	
	while(crs!=EOF)
	{
		crs=fscanf(fp,"%d",&number);
	
	
		
		if(counter==0)
		{
		bnumber=number;
		snumber=number;
		counter++;
		}
		else
		{
		if(number>bnumber) bnumber=number;
		if(number<snumber) snumber=number;
		}
				
		
		
	}
	printf("%d\n",bnumber);
	
	printf("%d",snumber);
	
	
}
