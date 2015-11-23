#include<stdio.h>
 
 
int main(){
double A[100];    //DECLARA A VARIAVEL DE DUPLA PRECISÃO//
int b;
for (b=0;b<100;b++)
    scanf("%lf",&A[b]);
for (b=0;b<100;b++){       
    if(A[b]<=10)
        printf("A[%d] = %.1lf\n",b,A[b]);
    }
system("pause");}
