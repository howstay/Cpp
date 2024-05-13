#include <iostream>

using namespace std;

const int N = 1e5 + 10;

int q[N], tem[N];

typedef long long ll;

ll merge_(int q[], int l, int r)
{
    if (l >= r)
        return 0;
    int mid = l + r >> 1;
    ll res = merge_(q, l, mid) + merge_(q, mid + 1, r);
    int k = 0, i = l, j = mid + 1;
    while (i <= mid && j <= r)
    {
        if (q[i] <= q[j])
            tem[k++] = q[i++];
        else
        {
            res += mid - i + 1;
            tem[k++] = q[j++];
        }
    }
    while (i <= mid)
        tem[k++] = q[i++];
    while (j <= r)
        tem[k++] = q[j++];
    for (int i = l, j = 0; i <= r; i++, j++)
        q[i] = tem[j];

    return res;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> q[i];
    cout << merge_(q, 0, n - 1);
    return 0;
}