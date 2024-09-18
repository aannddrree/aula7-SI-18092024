#include <stdio.h>
int main (){
    int numero = 0;
    do{
        printf("\nEntre com a opcao: \n");
        printf("1 - Imprimir Legal \n");
        printf("2 - Imprimir Bom dia \n");
        printf("3 - Sair \n");
        scanf("%d", &numero);
        switch (numero)
        {
        case 1:
            printf("Legal");
            break;
        case 2:
            printf("Bom dia");
            break;
        case 3:
            printf("ate mais");
            break;
        default:
            printf("opcao invalida");
            break;
        }
    }while (numero != 3);
    return 0;
}