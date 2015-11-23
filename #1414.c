#include <stdio.h>
   
int main() {
    char a[10];
    int b,c,p,j,t;
    while(scanf("%d",&t),t!=0){//atribui a quantidade de times e partidas, encerra se solicitado
        scanf("%d",&j);
        int c=0;
        j*=3;
        for (b=0;b<t;b++){//atribui os times e seus pontos
            scanf("%s",a);  
            scanf ("%d",&p);
            j-=p;
        }
        if(j>=0) 
            printf("%d\n",j);
    }
    return 0;
}
