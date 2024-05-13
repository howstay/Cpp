#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

vector<int> mul(vector<int> A,int b)
{
    vector<int> C;
    int t = 0;
    for (int i = 0;i<A.size();i++)
    {
        t += A[i] * b;
        C.push_back(t%10); //只取各位
        t /=10; //其余当作进位

    }

    while (t)
    {
        C.push_back(t%10);
        t /=10;

    }

    while (C.size() > 1 && C.back()==0)C.pop_back();
    return C;
}


int main()
{
    string a;
    cin >> a;
    int b;
    cin >> b;

    vector<int> A;
    for (int i = a.size()-1;i>=0;i--)A.push_back(a[i]-'0');

    auto C = mul(A,b);
    for (int i = C.size()-1;i>=0;i--)cout << C[i];
}