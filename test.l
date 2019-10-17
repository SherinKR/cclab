%{
#include<stdio.h>
int count=0;
%}
op [+-*/]
letter [a-zA-Z]
digitt [0-9]

id {letter}*|({letter}{digitt})+
notid ({digitt}{letter})+

%%

[\t\n]+
("int")|("float")|("char")|("main")|("include")|("case")|("default")|("if")|("for")|("printf")|("scanf") {}
{id} {printf("%s is an identifier\n", yytext); count++;}
{notid} {}
[(|)|{|}|;|=] {}

%%
int yywrap(void)
{
} 
int main()
{
	yyin=fopen("input.txt","r");
	yylex();
	printf("Total identifiers are: %d\n", count);
	return 0;
}
