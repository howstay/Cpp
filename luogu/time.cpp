#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cin >>m>>n;
    int a = m/n;
    float b = m*1.0/n;

    if (b>a)a+=1;
    int time = a + 10;

    int fen = time % 60;
    int shi = time/60;
    if(fen == 0) fen = 60 ,shi -=1;

    
    
    if (shi>8)printf("%02d:%02d",32-shi-1,60-fen);
    else printf("%02d:%02d",8-shi-1,60-fen);
    return 0;
}