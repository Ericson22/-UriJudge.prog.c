#include <stdio.h>
 
int main (){
 
int v, qtdgasolina=0, qtdalcool=0, qtddiesel=0;
        while(v!=4){
 
            scanf("%d", &v);
 
        switch(v){                                //O comando break, faz com que o switch seja interrompido assim que uma das declaraçes seja executada
                    case 1:                     //O comando switch testa uma variavel em relação a diversos valores.
                        qtdalcool++;
                                break;
                 
                    case 2:
                        qtdgasolina++;
                                break;
                     
                    case 3:
                        qtddiesel++;
                                break;
                    case 4:
                                break;
                }
 
 
            }
                        printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", qtdalcool, qtdgasolina, qtddiesel);
 
 
return 0;
 
}
