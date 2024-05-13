#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x;
    int count = 0;
    cin >> n >> x;
    for (int i = 1;i <= n;i++)
    {
        int a = i; 
        while (a)
        {
            if (x == (a % 10))count ++;
            a /= 10;
        }
    }
    cout << count;

    return 0;
}