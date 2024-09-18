#include <stdio.h>

int main(){
    int numero, soma = 0;
    printf("Digite um numero, e para sair digite 0\n");
    while(1){
        printf("Digite um numero: ");
        scanf("%d", &numero);
        if (numero == 0){
            break; //sair do looping
        }
        soma = soma + numero;
    }
    printf("Total: %d", soma);
    return 0;
}