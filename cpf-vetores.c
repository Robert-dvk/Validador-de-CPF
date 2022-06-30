#include <stdio.h>

int main()
{
    int vet[11], i, cont = 10, soma = 0;
    for(i=0; i<9; i++){
        printf("CPF digito %d: ", i+1);
        scanf("%d", &vet[i]);
    }
    for(i=0; i<9; i++){
        soma += (vet[i] * cont);
        cont--;
    }
    if(soma % 11 == 1 || soma % 11 == 0){
        vet[9] = 0;
    } else {
        vet[9] = 11 - (soma % 11);
    }
    cont = 11;
    soma = 0;
    for(i=0; i<10; i++){
        soma += (vet[i] * cont);
        cont--;
    }
    if(soma % 11 == 1 || soma % 11 == 0){
        vet[10] = 0;
    } else {
        vet[10] = 11 - (soma % 11);
    }
    for(i=0; i<11; i++){
        if(i == 3){
            printf(".");
        }
        if(i == 6){
            printf(".");
        }
        if(i == 9){
            printf("-");
        }
        printf("%d", vet[i]);
    }
    return 0;
}
