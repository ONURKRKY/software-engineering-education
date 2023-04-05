#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *dd;
	
	if((dd=fopen("mytext.txt","r"))==NULL)
	{
		printf("file does not exist.");
	}
	
	int year;
	char s1[10];
	char s2[10];
	fscanf(dd,"%s %d %s",s1,&year,s2);// it reads each line in text file
	printf("year of %d strings are %s %s",year,s1,s2);
	fclose(dd);
	
	
}
