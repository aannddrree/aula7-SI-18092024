#include <stdio.h>

int main(){
    int i = 0;
    int t = 0;
    
    printf("Digite a tabuada: ");
    scanf("%d", &t);

    do{
        printf("%d x %d = %d\n", t, i, i*t);
        i++;
    }while(i <= 10);
    
    return 0;
}