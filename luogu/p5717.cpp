#include<bits/stdc++.h>

using namespace std;

int main()
{
    int s[3];
    scanf("%d %d %d",&s[0],&s[1],&s[2]);
    sort(s,s+3);
    if(s[0]+s[1]<=s[2])printf("Not triangle");
    else
    {
        
        if (s[0]*s[0]+s[1]*s[1]>s[2]*s[2])printf("Acute triangle\n");
        if (s[0]*s[0]+s[1]*s[1] == s[2]*s[2])printf("Right triangle\n");
        if (s[0]*s[0]+s[1]*s[1] < s[2]*s[2])printf("Obtuse triangle\n");
        if (s[0] == s[1]||s[1]==s[2]||s[0]==s[2] )printf("Isosceles triangle\n");
        if (s[0]==s[2])printf("Equilateral triangle\n");
        
    }
    return 0;

}