#include <stdio.h>
  
int main() {
  
  int e, i, j;
    
   while(scanf("%d", &e), e!=0){               //guardar a ordem da matriz para executar//
      int mat[e][e], p=1, c=0, k, f=e;
       
    k=0; while(k<e){                        //laços que atribui os valores a matriz selecionado//
    i=c; while(i<f){
    j=c; while(j<f){
        mat[i][j]=p;
        j++;}
        i++;}
        p++;
        c++;
        f--;
        k++;}
       
      i=0; while(i<e){                               //imprimir a matriz com campo de ordem 3//
      j=0; while(j<e){
    printf("%3d", mat[i][j]);
        if (j<(e-1))
    printf(" ");
            j++;}
         printf("\n");
      i++;}
    printf("\n")  ;
   }
 
  
    return 0;
}
