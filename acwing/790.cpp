#include<iostream>

using namespace std;

const int N = 1e5 + 10;

int main()
{
    double n;
    cin >> n ;
    double l = -100.00,r = 100.00;

    while ((r - l) > 1e-8)
    {
        double mid =( l + r )/2;
        if (mid * mid * mid > n) r = mid;
        else l = mid;
    }
    printf("%.6f",l);

}