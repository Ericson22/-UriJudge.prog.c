#include <stdio.h>
   
int main() {
   
    int x[1000], n, i = 0, j = 0, k = 0;  /* Declara��o de variaveis*/
      
    scanf("%d", &n);
  
    while (i < 1000) {                /*Cria estrutura de repeti��o*/
        for (j = 0; j < n; j++) {
 
         if(i==1000)   
          break;         /*Esse comando pausa para dar inicio a outra*/
 
            x[i] = j;
         i++;
        }
    } 
        for (k = 0; k <1000; k++) {   /*O Comando For � um comando de repeti��o*/
            printf("N[%d] = %d\n", k, x[k]); 
        }
  return 0;
}
