#include <stdio.h>
   
int main() {
   
    int x[1000], n, i = 0, j = 0, k = 0;  /* Declaração de variaveis*/
      
    scanf("%d", &n);
  
    while (i < 1000) {                /*Cria estrutura de repetição*/
        for (j = 0; j < n; j++) {
 
         if(i==1000)   
          break;         /*Esse comando pausa para dar inicio a outra*/
 
            x[i] = j;
         i++;
        }
    } 
        for (k = 0; k <1000; k++) {   /*O Comando For é um comando de repetição*/
            printf("N[%d] = %d\n", k, x[k]); 
        }
  return 0;
}
