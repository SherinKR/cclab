#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char NFA_LEN 100;
char NFA_FILE[MAX_LEN];
char buffer[MAX_LEN];
int zz=0;
struct DFA{
char * states;
int count;
}dfa;
int last_index=0;
FILE *fp;
int symbols;
void reset(int ar[],int size)
{
        int a;
        for(i=0;i<size;i++){
        ar[i]=0;
        
        }
}
void check(int ar[],char S){
        int i,j;
        int len=strlen(S);
        for(i=0;i<len,i++)
        {
                
        }
