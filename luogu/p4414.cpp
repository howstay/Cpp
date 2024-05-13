#include<bits/stdc++.h>

using namespace std;


int main()
{

    int a[3];
    for (int i = 0;i < 3;i++) scanf("%d",&a[i]);
    sort(a,a+3);
    char s[4];
    cin >> s;
    for (int i = 0;i < 3;i++) printf("%d ",a[s[i]-'A']);

    return 0;
}