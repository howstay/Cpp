#include <iostream>

using namespace std;

const int N = 1e4 + 10;

int arr[N];

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int min = 0;
    for (int i = 0; i < m; i++)
    {
        min += arr[i];
    }
    for (int i = 1; i < n - m; i++)
    {
        int a = i;
        int sum = 0;
        for (int j = 0; j < m; j++)
            sum += arr[a++];

        if (min > sum)
            min = sum;
    }
    cout << min << endl;

    return 0;
}