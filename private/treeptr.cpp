#include <bits/stdc++.h>

using namespace std;

#define upfor(i, a, n) for (int i = a; i <= n; i++)
const int N = 1e5 + 10;
int inorder[N], postorder[N];

struct node
{
    node *left;
    node *right;
    int val;
};
node *head;
/*
7
2 3 1 5 7 6 4 postorder
1 2 3 4 5 6 7 inorder
*/
int n;

node *build_tree(int post_l, int post_r, int in_l, int in_r)
{
    if (post_l > post_r)
        return nullptr;
    node *now = new node();
    now->val = postorder[post_r];
    int index = 0;
    upfor(i, in_l, in_r)
    {
        if (inorder[i] == postorder[post_r])
            index = i;
    }
    int ltr_len = index - in_l;
    int rtr_len = in_r - index;
    now->left = build_tree(post_l, post_l + ltr_len-1, in_l, in_l + ltr_len-1);
    now->right = build_tree(post_r - rtr_len, post_r - 1, index + 1, in_r);
    return now;
}
void print_tree()
{
    queue<node> q;
    q.push(*head);
    int cnt = 0;
    while (!q.empty())
    {
        node now = q.front();
        q.pop();
        cout << now.val << (++cnt == n ? "\n" : " ");
        if (now.left != nullptr)
            q.push(*now.left);
        if (now.right != nullptr)
            q.push(*now.right);
    }
}

int main()
{
    cin >> n;
    upfor(i, 1, n )
            cin >>
        postorder[i];
    upfor(i, 1, n )
            cin >>
        inorder[i];
    head = build_tree(1, n , 1, n );

    print_tree();
    return 0;
}
