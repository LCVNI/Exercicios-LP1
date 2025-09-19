#include <stdio.h>

int main()
{
   int m[3][3];
   int soma=0;
   for(int i=0; i < 3; i++){
       for(int j=0; j < 3; j++){
           printf("Informe o numero da posicao %d,%d da matriz: ",i+1, j+1);
           scanf("%d", &m[i][j]);
       }
   }
   for(int i=0;i < 3; i++){//Conta cada passo
   
       for(int j=0; j < 3; j++){
           
           for(int k=0; k < 3; k++){
               
           if(j == k){
               soma+=m[j][k]*m[j+1][k+1]*m[j+2][k+2];
                    }
                    
           else if(j < k && k < 2){
               soma+=m[j][k]*m[j][k+1]*m[j][k+2];
               
           }
           }
       }
   }
    return 0;
}


