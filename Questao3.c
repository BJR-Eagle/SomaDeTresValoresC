#include <stdio.h>

//declarar variabeis
int n1, n2, n3, soma;

int main()
{
    //Coletar Valores da variavel n1
    printf("Digite o valor de n1:");
    scanf("%d", &n1);
    
    //Erro caso o valor de n1 seja 0
    if(n1 == 0) {
        return printf("o valor deve ser diferente de 0");
    } else {
        //Coletar Valores da variavel n2
        printf("Digite o valor de n2:");
        scanf("%d", &n2);
        //Erro caso o valor de n2 seja 0
        if(n2 == 0) {
            printf("o valor deve ser diferente de 0");
        } else {
            //Coletar Valores da variavel n3
            printf("Digite o valor de n3:");
            scanf("%d", &n3);
            //Erro caso o valor de n1 seja 0
            if(n3 == 0) {
                printf("o valor deve ser diferente de 0");
            } else {
                //realizar soma das variaveis n1, n2 e n3
                soma = (n1 + n2 + n3);

                //Imprimir em tela os resultados das variaveis
                printf("A soma é: ");
                printf("%d", soma);
            }
        }
    }
    return 0;
}