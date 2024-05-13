#include<bits/stdc++.h>
using namespace std;
#define upfor(i,a,n) for(int i = a;i<=n;i++)
const int N = 1e3 + 10;
int inorder[N],preorder[N],tree[N];
/*
7
1 2 3 4 5 6 7 inorder
4 1 3 2 6 5 7 pre
*/
void build(int in_l,int in_r,int pre_l,int pre_r,int sign){
    if (pre_l>pre_r)return ;
    tree[sign] = preorder[pre_l];
    int idx = 0;
    upfor(i,in_l,in_r){
        if (inorder[i] == preorder[pre_l]) idx = i;
    }
    //cout << inorder[idx]<< ' ';
    int left_len = idx - in_l;
    int right_len = in_r - idx;
    build(in_l,idx - 1,pre_l+1,pre_l+left_len,sign<<1);
    build(idx+1,in_r,pre_l+left_len+1,pre_r,sign<<1 + 1);
}
int main(){
    int n;
    cin >> n;
    upfor(i,1,n){
        cin >> inorder[i];
    }
    upfor(i,1,n){
        cin >> preorder[i];
    }
    build(1,n,1,n,1);
    int cnt = 0;
    upfor(i,1,N){
        if (tree[i]!=0) cout << tree[i] << (++cnt == n ? "\n" : " "); 
    }
    return 0;
}

