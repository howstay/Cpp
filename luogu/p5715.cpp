#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s[3];
    scanf("%d %d %d",&s[0],&s[1],&s[2]);
    sort(s,s+3);
    for(int i=0;i<3;i++)printf("%d ",s[i]);
    return 0;

}