#include <iostream>
#include <valarray>


using namespace std;

int  is_prime(int x)
{
    for (int i = 2;i <= sqrt(x);i++)
    {
        if (x % i == 0) return 0;
    }
    return 1;
}
int main()
{
    int n,cnt = 0,sum = 0;
    cin >> n;
    int g = 2;
    while (sum + g <= n)
    {
        if (is_prime(g)) {
            cout << g << endl;
            cnt++;
            sum += g;
            }
        g++;
    }

    cout << cnt;

    return 0;
}