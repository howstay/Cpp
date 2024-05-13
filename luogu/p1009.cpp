#include<bits/stdc++.h>

using namespace std;

int a[101],s[101];


void jc(int x)
{
    int g = 0;
    for (int i = 100; i >= 0; i--)
    {
        a[i] = a[i] * x + g;
        g = a[i] / 10;
        a[i] = a[i] % 10;  
    }
}

void qh()
{
    int g = 0;
    for (int i = 100;i >= 0; i--)
    {
        s[i] = a[i] + s[i] + g;
        g = s[i] / 10;
        s[i] = s[i] % 10;

    }
}

void sc()
{
    int w;
    for (int i = 0;i <= 100; i++)
    {
        if (s[i] != 0)
        {
            w = i;
            break;
        }

    }

    for (int i = w; i <= 100; i++)
    {
        printf("%d",s[i]);
    }
}
int main()
{
    int n;
    cin >> n;

    a[100] = s[100] = 1;
    for (int i = 2; i <= n; i++)
    {
        jc(i);
        qh();
    }
    sc();

    return 0;

}