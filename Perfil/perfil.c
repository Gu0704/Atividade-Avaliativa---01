#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int dia, mes, ano, b1, b2, b3, a1, a2, a3;

    printf("Insira sua data de nascimento: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

 
    a1 = (dia * 100) + mes;
    b1 = a1 + ano;

    a2 = b1 / 100;
    a3 = b1 % 100;

    b2 = a2 + a3;
    b3 = b2 % 5;

    switch (b3)
    { 
    case 0:
        printf("timido");
        break;
    case 1:
        printf("sonhador");
        break;
    case 2:
        printf("paquerador");
        break;
    case 3:
        printf("atraente");
        break;
    case 4:
        printf("irresistivel");
        break;
    default:
        break;
    }

    return 0;
}