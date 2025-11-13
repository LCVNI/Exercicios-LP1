#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
char name[88];
printf("Informe seu nome completo: ");
fgets(name, 88, stdin);
char *fullname= (char*) malloc (strlen(name) * sizeof(char) + 1);
strcpy(fullname, name);
char *primeiro= strchr(fullname, ' ');
int pos1= primeiro - fullname;
char backup= fullname[pos1];
fullname[pos1]= '\0';
printf("Primeiro nome: %s ",fullname);
fullname[pos1]=backup;
int tam= strlen(fullname) - 1;
int initpos=0;
for(int i=tam; i > 0; i--){
    char *init= strchr(fullname, ' ');
    if(i == init - fullname){
        initpos=i;
        break;
    }
}
printf("\nUltimo nome: %s",);
free (fullname);
    return 0;
}