#include <stdio.h>


int main()
{
    int r, x1 = 0, x2 = 1, s = 1;

   
    printf("\nQuantos termos de Fibonacci você deseja ver?: ");
    scanf("%d", &r);
    getchar();

    printf("Termos da sequencia de Fibonacci: %d, ", x2);
    for (int i = 3; i <= r; i++)     
    {
        printf("%d, ", s);
        x1 = x2;
        x2 = s;
        s = x1 + x2;
    }
    printf("%d", s); 

    return 0;