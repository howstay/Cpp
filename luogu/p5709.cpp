#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m,t,s;

    cin >>m>>t>>s;

    if (t == 0)
    {
        cout <<0;
        return 0; 
    }
    int a=s/t;
    if (s%t!=0)a++;
    if(m-a<0)cout <<0;
    else cout <<m-a;
    return 0;
}
