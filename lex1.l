/*lex code to count the number of lines, 
	tabs and spaces used in the input*/

%{ 
#include<stdio.h> 
int lc=0, sc=0, tc=0, ch=0; 
/*Global variables*/
%} 

/*Rule Section*/
%% 
\n lc++; //line counter 
[ ] sc++; //space counter 
\t tc++; //tab counter 
. ch++;	 //characters counter 
%% 

int main() 
{ 
	// The function that starts the analysis 
	
	FILE *fptr;
	fptr=fopen("input.txt","r");
	yyin=fptr;

	yylex(); 

	printf("\nNo. of lines=%d", lc); 
	printf("\nNo. of spaces=%d", sc); 
	printf("\nNo. of tabs=%d", tc); 
	printf("\nNo. of other characters=%d\n", ch); 
	return 0;	
}
int yywrap(){
return 0;
}

