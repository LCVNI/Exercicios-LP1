/*Leia um número inteiro n e gere uma sequência
“espelhada” dos n primeiros números primos.*/
void espelhar(int n){
    int cont=0, primos=0;
    while(primos <= n){

        if(primos <= n/2){
            for(int i=1; primos <= n; i++){

                for(int j=1; j <= i; j++){
                    if(j % i == 0){
                    cont++;
                    }
                }
            if(cont == 2){
                printf("%d", i);
                primos++;
            }
            cont=0;
            }
        }
    }
}
//Se i>=n,  
