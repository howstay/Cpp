#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s[14],mod[12]="0123456789X";
    scanf("%s",s);
    int sum = 0,j = 1;
    for(int i = 0;i < 12; i++)
    {
        if( s[i] == '-') continue;
        sum += int(s[i]-'0')*j++;
    }
    int x = sum % 11;
    if (x == 10) 
    {   x = 'X';
        if(x == int(s[12])) printf("Right");
        else
        {
            s[12] = 'X';
            cout <<s;
        }
    }
    else 
    {
        if (x == s[12] - '0') printf("Right");
        else 
        {
            s[12] = x + '0';
            cout <<s;
        }
    }

    return 0;

}