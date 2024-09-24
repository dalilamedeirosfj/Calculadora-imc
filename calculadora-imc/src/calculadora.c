/* ARQUIVO CALCULADORA.C */

#include <stdio.h>
#include "calculadora.h" 
int main() {
    double peso, altura, imc;
    printf("Digite o peso em kg, por favor: ");
    scanf("%lf", &peso);
    printf("Digite a altura em metros: ");
    scanf("%lf", &altura);
    imc=calculo(peso,altura);
    if (imc != -1)
    {
        printf("O IMC eh: %.2f\n", imc);
        if (imc < 18.5) {
            printf("\nClassificacao: Magreza\n");
        } else if (imc >= 18.5 && imc < 24.9) {
            printf("\nClassificacao: Normal\n");
            } else if (imc >= 25 && imc < 29.9) {
                printf("\nClassificacao: Sobrepeso\n");
                } else {
                    printf("\nClassificacao: Obesidade\n");
                }
    }
    else
    {
        printf("\nOpss... algo de errado nao esta certo!");
    }
    return 0; 
}