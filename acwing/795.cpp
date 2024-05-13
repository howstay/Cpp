#include <iostream>

using namespace std;

const int N = 1e5 + 10;

int q[N],sum[N];

int main()
{
    int n,m;
    cin >> n >> m;
    for (int i = 0;i < n;i ++) cin >> q[i];
    sum[0] = 0;
    for (int i = 1;i<= n;i ++) sum[i] = sum[i-1] + q[i-1];
    while (m--)
    {
        int l,r;
        cin >> l >> r;
        cout << sum[r] - sum[l-1] << endl;
    } 
    return 0;
}