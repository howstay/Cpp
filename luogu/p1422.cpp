#include<bits/stdc++.h>

using namespace std;

int main()
{
    double n;
    cin >>n;
    double b;
    if (n<=150) b=n*0.4463;
    if (n>150&&n<=400) b=150*0.4463+(n-150)*0.4663;
    if (n>400) b=150*0.4463+250*0.4663+(n-400)*0.5663;
    printf("%.1f",b);
    return 0;
}