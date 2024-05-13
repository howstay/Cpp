#include <bits/stdc++.h>

using namespace std;

int main()
{
    for ( int i = 0;i < 2; i ++)
    {
        for (int j = 0; j < 2-i; j ++)cout << " ";
        for (int k = 0; k < i * 2 + 1 ; k ++) printf("*");
        printf("\n");
    }


    for ( int i = 2;i > 0; i --)
    {
        for (int j = 0; j < 2-i; j ++)cout << " ";
        for (int k = 0; k < i * 2 + 1 ; k ++) printf("*");
        printf("\n");
    }
    printf("  *");
    return 0;
}