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
("int")|("float")|("char")|("main")|("include")|("case")|("default")|("if")|("for")|("printf")|("scanf") {printf("%s is a keyword\n", yytext);}
{id} {printf("%s is an identifier\n", yytext); count++;}
{notid} {printf("%s is not an identifier\n", yytext);}
[(|)|{|}|;|=] {printf("%s is a special character\n", yytext);}

%%
int yywrap(void)
{
} 
int main()
{
FILE *fp;
//fp=fopen("input.txt","r");
yyin=fopen("input.txt","r");
yylex();
printf("Total identifiers are: %d\n", count);
return 0;
}
