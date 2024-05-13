#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    int sum = 0,y = 0,count = 0;
    cin >> n >> k;
    for (int i = 1; i < n+1;i++)
    {
        if (i % k == 0 ) y += i,count++;
        sum += i;
    }
    float av1,av2;
    av1 = y*1.0/count;
    av2 = (sum-y)*1.0/(n-count);

    printf("%.1f %.1f",av1,av2);

    return 0;
}