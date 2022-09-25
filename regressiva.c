#include <stdio.h>
#include <stdlib.h>



   int main()
{
    int x;

    printf("Começe sua contagem regressiva digitando um número: ");
    scanf("%d", &x);


    while(x)
    {
        printf("%d\n",x -1);
        x = x - 1;
    }
    return 0;

}