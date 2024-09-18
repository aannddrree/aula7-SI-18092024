#include <stdio.h>

int main(){
    int t = 0;
    printf("Qual tabuada vc quer: ");
    scanf("%d", &t);
    //Objetivo e imprimir a tabuada do 2
    for (int i = 0; i <= 10; i++){
        printf("%d x %d = %d\n", t, i, t*i);
    }
    return 0;
}