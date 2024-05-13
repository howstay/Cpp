#include <iostream>

using namespace std;

const int N = 1010;
int q[N][N];
int sum[N * N];
int main()
{
    int n, m, l;
    cin >> n >> m >> l;
    sum[0] = 0;
    int cnt = 1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> q[i][j];
            sum[cnt] = sum[cnt - 1] + q[i][j];
            cnt++;
        }
    while (l--)
    {
        int x1, x2, y1, y2;
        cin >> x1 >> x2 >> y1 >> y2; //(x1,y1) (x2,y2)
    }
    return 0;
}