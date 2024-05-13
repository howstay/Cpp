#include <iostream>

using namespace std;

const int N = 1e8;

int a[N];

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        double x;
        int y;
        scanf("%lf %d", &x, &y);
        for (int i = 1; i <= y; i++)
        {
            if (a[int(x * i)])
                a[int(x * i)] = 0;
            else
                a[int(x * i)] = 1;
        }
    }
    int cnt = 0;
    while (!a[cnt])
    {
        cnt++;
    }
    cout << cnt << endl;

    return 0;
}