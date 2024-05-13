#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 10;

int primes[N], cnt;

bool st[N];

int minp[N];

void get_primes(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (!st[i])
            minp[i] = i, primes[cnt++] = i;
        for (int j = 0; primes[j] * i <= n; j++)
        {
            st[primes[j] * i] = true;
            minp[primes[j] * i] = primes[j];
            if (i % primes[j] == 0)
                break;
        }
    }
}

int main()
{
    get_primes(100000);

    for (int i = 0; i < 20; i++)
        printf("%d\n", primes[i]);

    return 0;
}