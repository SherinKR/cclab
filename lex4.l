%{ 
#include<stdio.h> 
#include<string.h> 
int vowels = 0, constants=0;
 
%} 


%% 
[aeiouAEIOU] { vowels++;}
. {constants++;}
%% 

int yywrap(void){} 

int main() 
{ 
	yyin=fopen("input4.txt","r"); 
	yylex();
	printf("No of vowels: %d \n",vowels); 
	printf("No of Constants : %d \n",constants);
	return 0; 
} 
