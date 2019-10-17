
#include<ctype.h>
#include<stdio.h>
#include<string.h>
void main()
{
	FILE*f1;
        char c,str[10];
	int lineno=0,num=0,i=0;

	f1=fopen("input.txt","r");
	while((c=getc(f1))!=EOF)
	{
		if(isdigit(c))
		{
			num=c-48;
			c-getc(f1);
			while(isdigit(c))
			{
				num=num*10+(c-48);
				c=getc(f1);
			}
			printf("%d is a number\n",num);
			ungetc(c,f1);
		}
		else if(isalpha(c))
		{
			str[i++]=c;
			c=getc(f1);
			while(isdigit(c)||isalpha(c)||c=='_'||c=='$')
			{
				str[i++]=c;
				c=getc(f1);
			}
			str[i++]='\0';
			if(strcmp("for",str)==0||strcmp("while",str)==0||strcmp("do",str)==0||
			strcmp("int",str)==0||strcmp("float",str)==0||strcmp("char",str)==0||
			strcmp("double",str)==0||strcmp("static",str)==0||
			strcmp("switch",str)==0||strcmp("case",str)==0||strcmp("main",str)==0)
			printf("%s is a keyword\n",str);
			else
			printf("%s is a identifier\n",str);
			i=0;
		}
			else 
				if(c==' '||c=='\t')
					printf("\n");	
			else 
				if(c=='\n'){
					lineno++;
					//printf("Newline");
				}
			//else
			//printf("%c is a special symbol\n",c);
		}
		printf("Total no of lines are %d \n",lineno);
		fclose(f1);
}			
