#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x,n;
    cin >>x>>n;
    int c = 0;
    while ( n-- )
    {
        if ( x%7!= 6 && x%7 != 0)c+=250;
        x++;
    } 
    printf("%d",c);
    
    return 0;
}