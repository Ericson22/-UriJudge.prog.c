#include<stdio.h>
 
 
int main(){
     
     
    /*Declaracao de Variaveis */
    int str[25], i, j = 0;
 
    /*Laco para preencher o vetor - entrada */
    for(i = 0; i < 20; i++){
        scanf("%d", &str[i]);
    }
    i--;
     
    /*Laco para imprimir os resultados trocados - saida*/
    for( ; i >= 0; i--){
        printf("N[%d] = %d\n", j, str[i]);
        j++;
 
    }
 
return 0;
 
}
