#include <iostream>

using namespace std;

int a[10];

int main()
{
    int m, n;
    cin >> m >> n;

    for (int i = m; i <= n; i++)
    {
        int x = i;
        while (x)
        {
            int t = x % 10;
            switch (t)
            {
                case 0:a[0]++;break;
                case 1:a[1]++;break;
                case 2:a[2]++;break;
                case 3:a[3]++;break;
                case 4:a[4]++;break;
                case 5:a[5]++;break;
                case 6:a[6]++;break;
                case 7:a[7]++;break;
                case 8:a[8]++;break;
                case 9:a[9]++;break;

            }
            x /= 10;
        }
    }

    for (int i = 0;i < 10;i++) cout << a[i] << " ";

    return 0;
}