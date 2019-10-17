%{ 
#include<stdio.h> 
#include<string.h> 
int flag = 0; 
%} 


%% 
^0(10|01)*$ { flag =1;}
%% 

int yywrap(void){} 

int main() 
{ 
	yyin=fopen("input3.txt","r"); 
	yylex();
	if(flag==1){
		printf("\nAccepted\n");}
	else{
		printf("\nNot Accepted\n");} 

	return 0; 
} 

