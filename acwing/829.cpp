#include<iostream>

using namespace std;

const int N = 1e5 +10;

int q[N];
int head = 0;
int rear = -1;

int m;

int main()
{
    cin >> m;
    while (m--)
    {
        string op;
        int x;
        cin >> op;
        if (op == "push") {
            cin >> x;
            q[++rear] = x;
        }
        else if(op == "pop") head++;
        else if(op == "empty") cout<< (head<=rear?"NO":"YES")<<endl;
        else cout <<q[head]<<endl;
    }
    return 0;
}


