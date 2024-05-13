#include<bits/stdc++.h>

using namespace std;
#define upfor(i,a,n) for(int i=a;i<=n;i++)
#define downfor(i,a,n) for(int i=a;i>=n;i--)
const int lim = 1e5;
int after[lim+5],mid[lim+5],tree[lim+5],n;

void build(int a_l,int a_r,int m_l,int m_r,int sign){
    if(a_l>a_r)
        return;
    tree[sign] = after[a_r];
    int index = 0;
    upfor(i,m_l,m_r){
        if(after[a_r] == mid[i]){
            index = i;
            break;
        }
    }
    int l_len =  index - m_l;                                                                                               
    int r_len = m_r - index;
    build(a_l,a_l+l_len-1,m_l,index-1,sign<<1);
    build(a_r-r_len,a_r-1,index+1,m_r,sign<<1|1);
}

struct node{
    node *left;
    node *right;
    int val;
};
node *head;

node* bulid_tree(int a_l,int a_r,int m_l,int m_r){
    if(a_l>a_r)
        return nullptr;
    int index = 0;
    node * now = new node();
    now->val = after[a_r];
    upfor(i,m_l,m_r){
        if(after[a_r] == mid[i]){
            index = i;
            break;
        }
    }
    int l_len =  index - m_l;
    int r_len = m_r - index;
    now->left = bulid_tree(a_l,a_l+l_len-1,m_l,index-1);
    now->right = bulid_tree(a_r-r_len,a_r-1,index+1,m_r);
    return now;
}

void print_tree(){
    queue<node> q;
    q.push(*head);
    int cnt = 0;
    while(!q.empty()){
        node now = q.front();
        q.pop();
        cout<<now.val << (++cnt==n?"\n":" ");
        if(now.left != nullptr)
            q.push(*now.left);
        if(now.right != nullptr)
            q.push(*now.right);
    }
}


int main(){
    cin >> n;
    upfor(i,1,n)
        cin>>after[i];
    upfor(i,1,n)
        cin>>mid[i];
    /*
    build(1,n,1,n,1);
    int cnt = 0;
    upfor(i,1,lim)
        if(tree[i])
            cout<<tree[i]<<(++cnt==n?"\n":" ");
    */
    head = bulid_tree(1,n,1,n);
    print_tree();
    return 0;
}