#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	int i,j,l=0,spaces=0,tabs=0,keywords=0,ident=0;
	char inputfile[100],ch,word[50]={};
	FILE *fptr;
	printf("Enter file name : ");
	scanf("%s",inputfile);
	fptr=fopen(inputfile,"r");
	
	if(fptr==NULL)
	{
		printf("Can't Open file !!\n");
		exit(0);
	}
	ch=fgetc(fptr);
	while(strcmp(word,"EOF")!=0)
	{

		//printf("%s",word);
		//fscanf(fptr,"%s",word);
		l=strlen(word);
		if(ch != ' ')
		{
			word[l]=ch;	
		}
		if(strcmp(word,"include")==0)
		{
			ident++;
		}
		else if(strcmp(word,"void")==0)
		{	
			keywords++;
		}
		else if(strcmp(word,"main")==0)
		{	
			keywords++;
		}
		else if(strcmp(word,"int")==0)
		{	
			keywords++;
		}
		else if(strcmp(word,"char")==0)
		{	
			keywords++;
		}
		else
		{	
			ident++;
		}
		
		
	}

	fclose(fptr);
	printf("\n Keywords= %d \n",keywords);
	printf(" identifiers= %d \n",ident);
	printf(" Total words = %d \n",keywords+ident);
}
	
