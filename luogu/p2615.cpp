#include <iostream>

using namespace std;

const int N = 50;

int a[N][N];

int main()
{
    int n;
    cin >> n;

    a[0][n / 2] = 1;
    int x, l;

    x = 0, l = n / 2;

    for (int k = 2; k < n * n + 1; k++)
    {
        if (x == 0 && l != n - 1)
        {
            a[n - 1][l + 1] = k;
            x = n - 1;
            l = l + 1;
        }
        else if (l == n - 1 && x != 0)
        {
            a[x - 1][0] = k;
            x = x - 1;
            l = 0;
        }
        else if (x == 0 && l == n - 1)
        {
            a[x + 1][l] = k;
            x = x + 1;
        }
        else if (x != 0 && l != n - 1)
        {
            if (a[x - 1][l + 1] == 0)
            {
                a[x - 1][l + 1] = k;
                x = x - 1;
                l = l + 1;
            }
            else
            {
                a[x + 1][l] = k;
                x = x + 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}