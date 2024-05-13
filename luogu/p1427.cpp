#include <iostream>
#include <vector>

using namespace std;

int main()
{
   
    vector<int> A;
    int cnt = 0;
    while (true) {
        int n;
        cin >> n;
        A.push_back(n);
        if (n == 0) break;
        cnt++;
    }
    for (int i = cnt - 1; i >= 0; i--) {
        cout << A[i] << " ";
    }
    
    return 0;

}