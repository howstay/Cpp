#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin >>a>>b>>c>>d;
    int h = a*60+b;
    int l = c*60+d;
    int cha = l - h;
    cout <<cha/60<<" "<<cha%60<<endl;
    return 0;
}