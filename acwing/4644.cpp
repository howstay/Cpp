#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
const int N = 1e6 + 10;
ll q[N];
ll sum[N];

int main()
{
    int n;
    cin >> n;
    for (int i = 0;i < n;i++)
        cin >> q[i];
    sum[0] = q[0];
    for (int i = 1;i < n;i ++)sum[i] =sum[i-1] + q[i];
    ll Sum = 0;
    ll rear = n-1;
    for (int i = 0;i < n - 1;i++)
    {
        Sum += q[i] * (sum[rear] - sum[i]);
    }
    cout << Sum;
}