#include<stdio.h>
#include<stdlib.h>
void trocar(int *x,int *y){
           int tmp;
           tmp=*x;
           *x=*y;
           *y=tmp;
           }
int main(){
   int a=5, b=7;
   printf("Antes: A=%d e B=%d\n", a, b);
   trocar(&a, &b);
   printf("Depois: A=%d e B=%d\n", a, b);
    system ("Pause");
    return 0;
}
