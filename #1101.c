
#include<stdio.h>


int main(){
int a,b,c;
while(scanf("%d%d",&a,&b),(a&&b)>0){
int c=0;
if (a>b)
for(;b<=a;b++){
printf("%d ",b);
c+=b;
}
else if(b>a)
for(;a<=b;a++){
printf("%d ",a);
c+=a;
}
printf("Sum=%d\n",c);
}
 
  
    return 0;
}
