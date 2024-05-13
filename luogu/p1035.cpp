#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k;
    cin >> k;

    double Sn = 1;
    int n = 1;
    double a = 2;
    while (Sn <= k)
    {
        Sn += 1 / a++;
        n++;
    }   

    cout << n;

    return 0;
    
}