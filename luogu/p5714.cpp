#include<bits/stdc++.h>
using namespace std;
int main()
{
    float m,h;
    cin >>m>>h;
    float b = m/h/h;
    if (b>=24){
        cout <<b<<endl;
        cout <<"Overweight";
    }
    if (b<18.5) cout <<"Underweight";
    if (b>=18.5&&b<24) cout <<"Normal";
    return 0;
}