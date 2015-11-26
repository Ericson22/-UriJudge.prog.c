#include <stdio.h>
#define max 100
int main() {
    /*Moises da Silva
      Ericson Guerra
      Matheus Blimblien
      Jorge Guimarães
    */
    double n[max];
    int a;
    scanf("%lf",&n[0]);
    for (a=0;a<max;a++){
        printf("N[%d] = %.4lf\n",a,n[a]);
        n[a+1]=(n[a]/2);}
    system("pause");
}
       