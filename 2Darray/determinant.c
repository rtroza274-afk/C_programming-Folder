#include <stdio.h>

int det(int n, int a[n][n])
{
    if (n == 1)
        return a[0][0];

    if (n == 2)
        return a[0][0] * a[1][1] - a[0][1] * a[1][0];

    int minor[n - 1][n - 1];
    int result = 0;

    for (int col = 0; col < n; col++)
    {
        int x = 0, y;

        for (int i = 1; i < n; i++)
        {
            y = 0;

            for (int j = 0; j < n; j++)
            {
                if (j != col)
                    minor[x][y++] = a[i][j];
            }

            x++;
        }

        if (col % 2 == 0)
            result += a[0][col] * det(n - 1, minor);
        else
            result -= a[0][col] * det(n - 1, minor);
    }

    return result;
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter matrix elements:\n");

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("Determinant = %d\n", det(n, a));

    return 0;
}
