#include <stdio.h>
#include <string.h>

int main()
{
    

    char nome[50], email[50];
    long long int telefone;
    int x1 = 0, x2 = 0, x3 = 0;

    printf("Digite seu primeiro nome: ");
    scanf("%s", &nome);
    printf("Informe seu email: ");
    scanf("%s", &email);
    printf("Telefone: ");
    scanf("%lld", &telefone);
    getchar();

    for (int i = 0; i < strlen(nome); i++)
    { 
        if (nome[i] != ' ')
            x1++;
    }
    for (int i = 0; i < strlen(email); i++)
    { 
        if (email[i] != ' ')
            x2++;
    }
    while (telefone != 0)
    { 
        telefone = telefone / 10;
           x3++;
    }

          printf("\nNome: %d digitos.", x1);
          printf("\nEmail: %d digitos.", x2);
          printf("\nTelefone: %d digitos.", x3);

    
    return 0;
}