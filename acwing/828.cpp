#include <iostream>

using namespace std;

const int N = 1e5 + 10;

int tt;
int skt[N];

int main()
{
    int m;
    cin >> m;
    while (m--)
    {
        string op;
        int x;
        cin >> op;
        if (op == "push") {
            cin >> x;
            skt[++tt] = x;
        }
        else if (op == "pop") tt--;
        else if (op == "empty") 
        {
            cout << (tt ? "NO" : "YES")<<endl;
        }
        else {
            cout << skt[tt] << endl;
        }
    }
    return 0;
}