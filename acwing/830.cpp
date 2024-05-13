#include<iostream>
using namespace std;
const int N = 100010;
int stk[N];
int tt = 0;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        while (tt&&stk[tt]>=x)tt--;
        if(tt) {
            cout <<stk[tt]<<' ';
        }
        else cout <<"-1 ";
        stk[++tt] = x;
    }
    return 0;
}
