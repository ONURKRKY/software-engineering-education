#include<stdio.h>
#include<stdlib.h>

main(){
	
	FILE * ftpr;
	
	if((fopen("k.txt","r"))==NULL)
	{
		printf("the file does not exist\n");
		exit(0);
	}
	else
	{
		printf("b.txt is opened\n");
		printf("the address of the file:%d\n",ftpr);
		
	}
	fclose(ftpr);// files is closed
}
