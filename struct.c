#include<stdio.h>
#define TAM 3
typedef struct aluno{
    char nome[25];
    char mat[11];
    int idade;
    float notas[3];
    float media;
}Aluno;
int main(){
    Aluno aluno[TAM];
 for(int j=0;j<TAM;j++){
    printf("\nALUNO %d: ",j+1);
 float soma=0;
printf("Insira o nome do aluno: ");
scanf("%s",aluno[j].nome);
printf("\nInsrira Matricula: ");
scanf("%s",aluno[j].mat);
printf("\nDigite a idade: ");
scanf("%d",&aluno[j].idade);
for(int i=0;i<3;i++){
printf("\nInsrira a nota %d: ",i+1);
scanf("%f",&aluno[j].notas[i]);
}
for(int i=0;i<3;i++){
    soma+=aluno[j].notas[i];
}
aluno[j].media=soma/3;
printf("\nINFORMACOES DO ALUNO %d:\n",j+1);
printf("Nome:%s",aluno[j].nome);
printf("\nMatricula:%s",aluno[j].mat);
printf("\nIdade:%d",aluno[j].idade);
for(int i=0;i<3;i++){
 printf("Nota %d: %2.f\n", i+1, aluno[j].notas[i]);
}
printf("Media: %.2f\n",aluno[j].media);
 }
return 0;
}
