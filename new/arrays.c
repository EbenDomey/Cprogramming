#include <stdio.h>

int main()
{
    int matA[2][2];
    int matB[2][2];
    int matC[2][2];
    printf("Input ur values for ur 2x2 matrices for mathematics to happen\n");

    printf("MatA:\n");
    for (int a = 0; a < 2; a++)
    {
        for (int b = 0; b < 2; b++)
        {
            scanf("%d", &matA[a][b]);
        }
    }
    printf("MatB:\n");
    for (int a = 0; a < 2; a++)
    {
        for (int b = 0; b < 2; b++)
        {
            scanf("%d", &matB[a][b]);
        }
    }
    printf("The resulting matrix is:\n");
    for (int a = 0; a < 2; a++)
    {
        printf("{");
        for (int b = 0; b < 2; b++)
        {
            matC[a][b] = matA[a][b] + matB[a][b];
            printf(" %d ", matC[a][b]);
        }
        printf("}\n");
    }
}