#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x,k,time,max = 0;
    int day = 0;
    int n = 0;
    while ( n++ < 7) 
    {
        scanf("%d %d",&x,&k);
        time = x + k;
        if (time > 8 && time > max)max = time,day = n;
    }
    printf("%d",day);
    return 0;
}