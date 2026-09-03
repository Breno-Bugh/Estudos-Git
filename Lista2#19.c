#include <stdio.h>

int main (void){
    double valorEmprestimo, salario, valorParcelas;
    int numParcelas;
    printf("Digite o valor do emprestimo: ");
    scanf("%lf", &valorEmprestimo);
    printf("Digite o numero de parcelas: ");
    scanf("%d", &numParcelas);
    printf("Digite o valor do seu salario: ");
    scanf("%lf", &salario);

    valorParcelas = valorEmprestimo/numParcelas;

    if(valorParcelas<=salario*0.3){
        printf("Emprestimo aprovado.");
    }else{
        printf("Emprestimo nao aprovado.");
    }
    return 0;
}