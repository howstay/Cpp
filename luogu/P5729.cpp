#include <bits/stdc++.h>

using namespace std;

const int N = 25;

bool q[N][N][N];
int t[6];

int main()
{
    int w, k, h;
    cin >> w >> k >> h;
    int Q;
    cin >> Q;
    while (Q--)
    {
        for (int i = 0; i < 6; i++)
            cin >> t[i];

        for (int x = t[0]; x <= t[3]; x++)
            for (int y = t[1]; y <= t[4]; y++)
                for (int z = t[2]; z <= t[5]; z++)
                    q[x][y][z] = true;
    }
    int cnt = 0;
    for (int i = 1; i <= w; i++)
        for (int j = 1; j <= k; j++)
            for (int l = 1; l <= h; l++)
                if (!q[i][j][l])
                    cnt++;
    cout << cnt << endl;
}