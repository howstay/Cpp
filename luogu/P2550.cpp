#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int a[7];
    int b = 7;
    int t, y, e, s, si, w, l;
    t = y = e = s = si = w = l = 0;
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &a[i]);
    }
    while (n--) {
        int c[7];
        int cnt = 0;
        for (int i = 0;i < 7; i++) {
            scanf("%d",&c[i]);
        }
        for (int i = 0;i < 7;i++) {
            for (int j = 0;j < 7; j++) {
                if (a[i] == c[j]) cnt++;
            }
        }
        switch (cnt)
        {
            case 1: l++;break;
            case 2: w++;break;
            case 3: si++;break;
            case 4: s++;break;
            case 5: e++;break;
            case 6: y++;break;
            case 7: t++;break;
        }
    }
    printf("%d %d %d %d %d %d %d",t,y,e,s,si,w,l);

    return 0;


}