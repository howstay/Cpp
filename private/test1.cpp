#include<bits/stdc++.h>
using namespace std;
#define upfor(i,a,n) for(int i = a;i<=n;i++)
const int N = 1e5;
int n,m;
int q[N][N];
int main(){
    cin >> n >> m;
    upfor(i,1,n)
    {
        int num;
        cin >> num;
        while(num--){
            int p;
            cin >> p;
            q[i][p] = 1;
        }
    }
    int chaxun;
    cin >> chaxun;
    while(chaxun--){
        int cnt = 0;
        int a,b;
        cin >> a>>b;
        upfor(i,1,n){
            if(q[i][a]==1&&q[i][b]==1)cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}