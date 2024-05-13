#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a,b,n;
    cin >> a >> b >> n;
    ll d = 1;
    ll sum = 0;
    ll cnt = 0;
    while (1)
    {
        if(d<6)sum+=a;
        if(d==6)sum+=b;
        if(d==7){
            sum+=b;
            d=1;
            if(sum>=n){
                cnt++;
                break;}
            continue;
        }
        d++;
        cnt++;
        if(sum>=n)break;
    }
    cout << cnt;

}