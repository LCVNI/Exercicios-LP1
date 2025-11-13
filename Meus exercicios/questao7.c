#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int ocorre(const char* str1, const char* str2){
    int tam1=strlen(str1);
    int tam2=strlen(str2);
    if(tam2 > tam1) return 0;
    int loopj=0, aux=0, cont=0;
    for(int i=0; i < tam2; i++){
        if(loopj){
            if(str1[aux+1]==str2[i]){
                cont++;
                continue;
            }
            else{
                return 0;
            }
            aux++;
        }

        for(int j=0; j < tam1; j++){
            if(str2[i] == str1[j]){
                cont++;
                loopj=1;
                aux=j;
                break;
            }
        }
    }
    if(cont == tam2){
        return 1;
    }
    else{
        return 0;
    }
}