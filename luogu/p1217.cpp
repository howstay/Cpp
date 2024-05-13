#include <iostream>
#include <valarray>

using namespace std;

int is_prime(int x)
{
    for (int i = 2;i <= sqrt(x); i++)
    {
        if (x % i == 0) return 0;
    }
    return 1;
}

int ishuiwen(int x)
{
    int a[8],cnt = 0;
    while (x)
    {
        a[cnt++] = x % 10;
        x /= 10;
    }
    cnt = cnt-1;
    int i = 0;
    while (i <= cnt)
    {
        if(a[i] != a[cnt]) return 0;
        i++;
        cnt--;
    }

    return 1;


}
int main()
{
    int a,b;
    cin >> a >> b;
    if (b>10000000) b = 9999999;
   if (a % 2 == 0) a++;
   for (int i = a;i <= b;i+=2)
   {
        if (!ishuiwen(i)) continue;
        else if(is_prime(i)) cout << i << endl;
   }

    return 0;
}