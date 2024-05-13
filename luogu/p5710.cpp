#include<bits/stdc++.h>

using namespace std;

int main()
{
    int count = 0;
    int x;
    cin >> x ;
    if (x%2==0)count++;
    if ((x>=4)&&(x<=12))count++;

    switch(count)
    {
        case 0: {
            cout <<"0 0 0 1";
            break;
        }
        case 1:{
            cout <<"0 1 1 0";
            break;
        }
        case 2:
        {
            cout <<"1 1 0 0";
            break;
        }
    }
    return 0;

}