#include<bits/stdc++.h>

using namespace std;

int main()
{
    int s[10];
    for (int i = 0; i < 10; i++) scanf("%d",&s[i]);
    int x;
    cin >> x;
    int count = 0;
    for (int i = 0; i < 10; i++)if (s[i] <= x + 30) count++;
    cout << count;

    return 0;
}