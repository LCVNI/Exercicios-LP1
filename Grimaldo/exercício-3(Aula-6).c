/*--------------------------------------------------------*/
/*Percorra uma matriz linhas em zigue-zague:     
linhas de índice par (0, 2, ...) da esquerda para a direita;
linhas de índice ímpar (1, 3, ...) da direita para a esquerda.
Ordem na matriz de exemplo seria 0, 1, 2, 5, 4, 3, 6, 7, 8*/
/*--------------------------------------------------------*/
#include <stdio.h>
void zigzag(int m[3][3], int rows, int cols)
{
   for(int i = 0; i < rows; i++){
       if(i % 2 != 0){
        for(int j = cols-1; j >= 0; j--){
              printf("%d", m[i][j]);
          }
       }
       else{
           for(int k = 0; k < cols; k++){
              printf("%d", m[i][k]);
             }
        }
        printf("\n");
    }
}
int main(){
    int m[3][3] ={
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8}
    };
    zigzag(m ,3, 3);
   return 0;
}
