#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    for(auto i: a){
        if(i>='a' and i<='z')
            cout<<char(i-32);
        else
            cout<<i;
    }
    return 0;
}