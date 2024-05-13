#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

const int N = 110;

int a[N];

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n ; j++)
        {
            for (int k = 0; k < n ; k++)
            {
                if (a[i] == a[j] + a[k] && a[j] != a[k])
                    s.insert(a[i]);
            }
        }
    }

    cout << s.size() << endl;

    return 0;
    
}