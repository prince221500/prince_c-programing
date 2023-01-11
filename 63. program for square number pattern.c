#include <stdio.h>

int main()
{
    int i, j, N;
    int k = 1;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        for(j=i; j<=N; j++)
        {
            printf("%d ", j);
        }

        k = j - 2;
        for(j=1; j<i; j++, k--)
        {
            printf("%d ", k);
        }

        printf("\n");
    }

    return 0;
}