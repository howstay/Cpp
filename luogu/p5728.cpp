#include <iostream>
#include <cmath>

using namespace std;

const int N = 1e4 + 10;

int a[N][3];

int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 0;i < n; i++) {
        for (int j = 0; j < 3; j++) {
            
            scanf("%d",&a[i][j]); 
        }
    }
    for (int i = 0;i < n; i++) {
        int sum = a[i][0] + a[i][1] + a[i][2];
        for (int j = i+ 1 ; j < n; j++) {
            int sum2 = a[j][0] + a[j][1] + a[j][2];
            if (abs(sum - sum2) <= 10 && abs(a[i][0] - a[j][0]) <= 5 && abs(a[i][1] - a[j][1]) <= 5 && abs(a[i][2] - a[j][2]) <= 5) cnt++; 
        }
    }

    cout << cnt;

    return 0;

}