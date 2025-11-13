#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int tem(const char *alvo, const char *fonte){
    int tama = strlen(alvo);
    int tamf = strlen(fonte);
    char alv[tama+1];
    char fnt[tamf+1];
    strcpy(alv, alvo);
    strcpy(fnt, fonte);
    strlwr(fnt);
    strlwr(alv);
    if(tama > tamf) return 0;
    int cont=0;
    for(int i = 0; i < tama; i++){
        for(int k=0; k < tamf; k++){
            if (alv[i] == fnt[k]){
                cont++;
                fnt[k]= ' ';
                break;
            }
        }
    }
    if(cont == tama) return 1;
    else{
    return 0;
    }
}

int main(){
    char alvo[30], fonte[30];

    printf("Informe a string alvo: ");
    gets(alvo);
    printf("Informe a fonte: ");
    gets(fonte);

    if(tem(alvo, fonte)){
        printf("A fonte consegue cobrir o alvo: (Retornou 1)");
    }
    else{
        printf("A fonte nao consegue cobrir o alvo: Retornou 0");
    }
    return 0;
}