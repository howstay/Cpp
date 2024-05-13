#include <bits/stdc++.h>
#include <set>
using namespace std;

const int N = 1e5 + 10;
int q[N];

int main()
{
    string s1;
    getline(cin, s1);
    int i = 0;
    int p = -1;
    while (s1[i] != '\0')
    {
        if (s1[i] != ' ')
            q[++p] = s1[i] - '0';
        i++;
    }
    if (p < 2)
    {
        if (q[0] > q[1])
            cout << q[0];
        else
            cout << q[1];
    }
    else
    {
        int z = 0;
        int a, b, c;

        set<int> s;
        for (int i = 0; i < p; i++)
            s.insert(q[i]);

        
        for (auto i:s)z++;
        if(z<3)
        {
            int w ;
            w = *s.begin();
            for (auto i:s)
            {
                if (i < w) w = i;
            }
            cout << "第三大的数是 " << w << " ";
        }

        else {
            a = *s.begin();
            for (auto i : s)
            {
                if (i > a)
                    a = i;
            }
            s.erase(a);
            b = *s.begin();

            for (auto i : s)
            {
                if (i > b)
                    b = i;
            }
            s.erase(b);
            c = *s.begin();
            for (auto i:s)
            {
                if (c < i) c = i;
            }
            s.erase(c);
            int d = *s.begin();
            for (auto i:s)
            {
                if (d < i) d = i;
            }
            cout << "第三大的数是 " << d << " ";
        }
        
    }
}
