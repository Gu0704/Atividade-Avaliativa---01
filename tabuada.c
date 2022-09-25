#include <stdio.h>
#include <stdlib.h>

  int main()
 {
    int e, m = 0; 
    int n = 1;

    printf("Digite um numero para calcularmos sua tabuada: ");
    scanf("%d", &e); 
    getchar();

    for (int i = 0; i < e; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            m++;
            printf("\n%d * %d = %d", n, m, n * m);
        }
        printf("\n");
        n++;
        m = 0;
    }



    return 0;
 }

