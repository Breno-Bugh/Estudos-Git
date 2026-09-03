#include <stdio.h>

int main(void) {
    double salario, bonus;
    int anos;
    printf("Digite seu salario: ");
    scanf("%lf", &salario);
    printf("Digite ha quantos anos trabalha na empresa: ");
    scanf("%d", &anos);
    if(anos>=5){
        bonus=salario*0.2;
    }else{
        bonus=salario*0.1;
    }
    printf("Seu bonus salarial e igual a: R$%.2lf", bonus);
    return 0;
}
