#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++ ) {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = 0;j < i; j++) {
            if (a[j] < a[i]) cnt++;
        }
        cout << cnt << " ";

    }
    return 0;
}