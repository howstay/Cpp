#include<bits/stdc++.h>
using namespace std;

int main()
{
    int year,month;
    cin >> year >> month;
    if ( (year%4==0&&year%100!=0)||year%400==0){
        switch (month)
        {
            case 1:case 3:case 5:case 7:case 8:case 10:case 12:printf("31");break;
            case 2:printf("29");break;
            default:printf("30");
        }
    }
    else{
        switch (month)
        {
            case 1:case 3:case 5:case 7:case 8:case 10:case 12:printf("31");break;
            case 2:printf("28");break;
            default:printf("30");
        }
    }
    return 0;
}