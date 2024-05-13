#include <iostream>

using namespace std;

void f(int n){
    if (n == 1) return ;
    else if ( n % 2 == 0)   {
        f(n / 2);
        printf("%d ",n/2);
    }
    else    {
        f(n * 3 + 1) ;
        printf("%d ",n * 3 + 1);
    }
    
}


int main()
{
    int n ; 
    cin >> n;
    int a = n;
    f(n);
    cout << a;
    return 0;
}