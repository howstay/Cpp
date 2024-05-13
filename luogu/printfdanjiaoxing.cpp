#include <bits/stdc++.h>

using namespace std;

int main()
{
    char c;
    scanf("%c",&c);

    for(int i = 0; i < 3;i ++)
    {
        for (int j = 0; j < 2 - i;j ++)printf(" ");
        for (int j = 0;j < 1 + i * 2;j ++) printf("*");
        printf("\n");
    }
    return 0;
}