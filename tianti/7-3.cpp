#include<iostream>

using namespace std;

const int N = 1e5 + 10;
int q[N];

int main()
{
    int n;
    cin >> n;
    int i = -1;
    int front = 0;
    while (n--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int d;
            cin >> d;
            q[++i] = d;
        }
        else if (op == 0 &&  front > i)cout << "invalid" << endl;
        else if (op == 0 && front <= i ) cout << q[front++] << endl;

    }
}