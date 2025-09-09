#include<stdio.h>
#include<string.h>
#include<stdlib.h>
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
 float soma=0;
    printf("\nALUNO %d: ",j+1);
printf("Insira o nome do aluno: ");
scanf("%s",aluno[j].nome);
printf("\nInsira Matricula: ");
scanf("%s",aluno[j].mat);
printf("\nDigite a idade: ");
scanf("%d",&aluno[j].idade);
///////////////////////
for(int k=0;k<3;k++){
printf("\nInsrira a nota %d: ",k+1);
scanf("%f",&aluno[j].notas[k]);
}
///////////////////////
for(int i=0;i<TAM;i++){
    soma+=aluno[j].notas[i];
}
///////////////////////
aluno[j].media=soma/TAM;
//INFOS DO ALUNO
printf("\nINFORMACOES DO ALUNO %d:\n",j+1);
printf("Nome:%s",aluno[j].nome);
printf("\nMatricula:%s",aluno[j].mat);
printf("\nIdade:%d",aluno[j].idade);
///////////////////////
for(int i=0;i<3;i++){
 printf("\nNota %d: %.2f", i+1, aluno[j].notas[i]);
}
printf("\nMedia: %.2f\n",aluno[j].media);
system("pause");
system("cls");
 }
 //Colocar as notas da maior para a menor em ordem decrescente
 float maiorMedia=aluno[0].media;
 char nomeMaior[25];
 strcpy(nomeMaior,aluno[0].nome);
 for(int x=1;x<TAM;x++){
         if(aluno[x-1].media<aluno[x].media){
             maiorMedia=aluno[x].media;
             strcpy(nomeMaior,aluno[x].nome);
             }
     }
     printf("\nO aluno com maior media foi %s, com %.2f pontos de media\n",nomeMaior,maiorMedia);
 system("pause");
return 0;
}
