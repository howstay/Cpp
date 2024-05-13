#include <iostream>

using namespace std;

const int N = 80;

int a[N];

int main()
{
    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    for (int i = 1; i <= s1; i++)
        for (int j = 1; j <= s2; j++)
            for (int k = 1; k <= s3; k++)
                a[i + j + k]++;

    int max = 0;

    for (int i = 0; i < s1 + s2 + s3; i++)
        if (a[max] < a[i])
            max = i;

    cout << max << endl;

    return 0;
}