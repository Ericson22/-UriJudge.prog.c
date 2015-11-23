#include <stdio.h>
#include <stdlib.h>
int main() {
       
             /*Declaracao de variaveis*/
    int j, i, linha;
    float m[12][12];
    float resultado = 0.0; 
    float cont = 0.0;
    char letra;
   
    /* Leitura do teclado, coluna e operacao */
    scanf("%d %c", &linha, &letra);
   
       
    /*Guarda os valores na matriz*/
    for (j = 0; j < 12; j++) {
    for (i = 0; i < 12; i++) {
  
    scanf("%f", &m[j][i]);
   
           
    /* Verifica qual sera a operacao*/
    if(j == linha && letra == 'S'){
        resultado += m[j][i]; 
       
        } else if(j == linha && letra == 'M'){
                resultado += m[j][i];
                cont++;
        }
        }
    }
    /* Imprimi o resultado*/
    if(cont > 0){
        resultado /= cont;
        printf("%.1f\n", resultado);
    } else {
        printf("%.1f\n", resultado);
    }
  
      
    return 0;
}
