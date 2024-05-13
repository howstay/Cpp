#include <iostream>

using namespace std;

const int N = 1e5 + 10;

int a[N] = {0};

int main()
{
    int n,x;
    cin >> n >> x;

    
    while (x--) {
        int b,c;
        cin >> b >> c;
        for (int i = b; i <= c; i++) {
            a[i] = 1;
        }
    }
    int cnt = 0;
    for (int i = 0;i < n + 1; i++) {
        if (a[i] == 0) cnt++; 
    }

    cout << cnt ;

    return 0;
}