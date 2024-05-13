#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b,k = 0,c = 1e7;
    scanf("%d",&n);
    while ( k++ < 3 )
    {
        scanf("%d %d",&a,&b);
        int price ;
        if( n%a == 0 )price = n/a * b;
        else
        {
            price = (n/a +1) * b;
        }

        if ( price < c )c = price;
    }
    printf("%d",c);
    return 0;

}