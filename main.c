#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define DIML 3
#define DIMC 5

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, j;
    int matriz[DIML] [DIMC];

    printf("\nEntre com 15 valores inteiros: \n");

        for(i = 0; i < DIML; i++)
        for(j = 0; j < DIMC; j++)

            scanf("%d", &matriz[i][j]);

        for(i = 0; i < DIML; i++){

        for (j = 0; j < DIMC; j++)

            printf("%5d", matriz[i][j]);
            printf("\n");
            }

    return 0;
}
