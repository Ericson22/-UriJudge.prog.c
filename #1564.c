#include <stdio.h>
int main()
{
    int n,saida[10000],i=0;
    while(scanf("%d", &n) != EOF) /* eof é uma condição do sistema operacional de um computador, atingida quando não há mais dados a serem lidos da "origem dos dados"*/
    {
        
        if(n==0)       /*iF É UM COMANDO DE CONDIÇÃO */
            saida[i]=0;
        if(n>0)
            saida[i]=1;
        i++;
    }
    for(n=0;n<i;n++)
    {
        if(saida[n]==0)
        {
            printf("vai ter copa!\n");
        }else{                                        /*OU*/
            printf("vai ter duas!\n");
        }
    }
    return 0;
}
