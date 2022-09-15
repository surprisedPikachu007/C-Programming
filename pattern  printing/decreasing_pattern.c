#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int temp = n;
    int size = 2 * n - 1;
    int res[size][size];

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < size; j++)
        {
            for (int k = i; k < size; k++)
            {
                res[j][k] = temp;
            }
        }
        size--;
        temp--;
    }

    size = 2 * n - 1;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    // implementation without array -> preferred over the former since does not need an array (memory savings)
    /* 
    for(i = -n; i <= n; i++) {

        if(i == 0 || i == 1)
            continue;

        for(j = -n; j <= n; j++) {
            if(j == 0 || j == 1)
                continue;

            if(abs(j) > abs(i))
                printf("%d",abs(j));
            else
                printf("%d",abs(i));
        }
        printf("\n");
    }
    */

    return 0;
}
