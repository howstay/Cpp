#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int count = 1;
    cin >> n;
    while(n!=1)
    {
        n = n / 2;
        count++;
    }
    cout << count;

    return 0;
}