#include <stdio.h>
int soma_total(int m[3][3], int rows, int cols)
{
  int soma=0
  for(int i = 0; i < rows; i++){
      for(int j = 0; j < cols; j++){
          soma+= m[i][j];
      }
  }
  return soma;
}
int main(){
    int m[3][3] ={
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8}
    };
    printf("Soma = %d", soma_total(m, 3, 3));
   return 0;
}
