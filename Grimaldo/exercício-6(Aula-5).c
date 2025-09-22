/*A função a seguir encontra a mediana entre três números,
reescreva essa função para que tenha apenas um return
[C Programming: A Modern Approach (1998)]*/
#include<stdio.h>
 double median(double vet[3])
{
    double aux=0.;
    for(int i = 0; i < 2; i++){
        if(vet[i] >= vet[i+1]){
            aux=vet[i];
            vet[i]=vet[i+1];
            vet[i+1]=aux;
            
        }
    }
    return vet[1];
}

int main(){
    double vet[3]={8, 4, 16};
    printf("Mediana= %.2f", median(vet));
    return 0;
}
