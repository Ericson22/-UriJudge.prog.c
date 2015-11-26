
  
#include <stdio.h>

int main(){
    int a,b,d[2],e=0;
    scanf("%d",&a);
    int c[a];
    for (b=0;b<a;b++)
        scanf("%d",&c[b]);
    for (b=1;b<a;b++){
        if(c[e]<c[b]){
          d[0]=c[e];
          d[1]=e;}
        else if(c[e]>c[b])      {
          e=b;
          d[0]=c[b];
          d[1]=b;}
    }
    printf("Menor valor: %d\nPosicao: %d\n",d[0],d[1]);
    
    system("pause");
}
