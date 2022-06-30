#include <stdio.h>
#include <math.h>

int main()
{
	int cont = 10, i = 8, v1, v2, resto;
    long cpf, d1, d2, potencia, cpf2, soma = 0, soma2 = 0,  resto2;
    printf("Digite o cpf: ");
    scanf("%ld", &cpf);
	//váriavel auxiliar para salvar o valor original do cpf
    cpf2 = cpf;
    //looping contando pela potencia para separar os dígitos
    for(i = 8; i >= 0; i--){
        potencia = pow(10, i);
        d1 = cpf/potencia;
        d2 = cpf % potencia;
        cpf = d2;
        //acumulador com soma e multiplicação dos dígitos separados
        soma = soma + (d1 * cont);
        cont--;
    }
    //testes de acordo com a ordem do exercício
    if (soma % 11 == 0 || soma % 11 == 1){
    	v1 = 0;
	} else {
		resto = soma % 11;
		v1 = 11 - resto;
	}
	cont = 11;
	cpf = (cpf2 * 10) + v1;
	for(i = 9; i >= 0; i--){
		potencia = pow(10, i);
        d1 = cpf/potencia;
        d2 = cpf % potencia;
        cpf = d2;
        //acumulador com soma e multiplicação dos dígitos separados
        soma2 = soma2 + (d1 * cont);
        cont--;
	}
	//mesmos testes do if anterior
	if (soma2 % 11 == 0 || soma2 % 11 == 1){
    	v2 = 0;
	} else {
		resto2 = soma2 % 11;
		v2 = 11 - resto2;
	}
    printf("CPF: %ld-%d%d",cpf2, v1, v2);
    return 0;
}
