#include <stdio.h>
 
 
int main(){
int a,b,c,d,e;
 
 
    scanf("%d",&a);   //DECLARA VARIAVEL//
        for(b=1;b<=a;b++){
e=0;
 
 
    scanf("%d",&c);
        for (d=1;d<=c;d++) 
if(c%d==0)      // VERIFICAR SE É DIVISIVEL APENAS POR ELE MESMO E PELO 1//
e++; 
if (e==2)
    printf("%d eh primo\n",c);     //IMPRIME OS DADOS//
else
    printf("%d nao eh primo\n",c);
}
     
 
  
    return 0;
}
