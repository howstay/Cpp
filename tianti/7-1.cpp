#include<iostream>
using namespace std;
const int N= 1e7;
int q[N];
int main()
{
    int n;
    cin >> n;
    int i = -1;
    int t;
    while (cin>>t)
    {
        if(t<0)break;
        q[++i] = t;
    }
    if (i-n+1<0)cout << "NULL";
    else cout << q[i-n+1];
}