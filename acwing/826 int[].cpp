#include <iostream>

using namespace std;

const int N = 1e5 + 10;
// head表示头节点的下标
// e[i] 表示节点i的值
// ne[i] 表示节点i的next指针是多少，也就是说节点i的下一个点下标是什么
// idx 存储当前已经用到了哪个点
int head, e[N], ne[N], idx;

//初始化
void init()
{
    head = -1;
    idx = 0;
}

//将x添加到头节点上
void add_to_head(int x)
{
    e[idx] = x;
    ne[idx] = head;
    head = idx;
    idx++;
}

//将x添加到下标k个数后面
void add(int k, int x)
{
    e[idx] = x;
    ne[idx] = ne[k];
    ne[k] = idx;
    idx++;
}

//将下标为k后面的节点删除
void remove(int k){
    ne[k] = ne[ne[k]];
}



int main(){
    int n;
    init();
    
    cin >> n;
    
    while (n--) {
        char op;
        int k,x;
        cin >> op;
        if (op == 'H'){
            cin >> x;
            add_to_head(x);
        }
        else if ( op == 'D'){
            cin >> k;
            if (k == 0) head = ne[head];
            else remove(k-1);
        }
        else{
            cin >> k >> x;
            add(k-1,x);
        }
    }    

    for (int i = head; i != -1;i = ne[i])cout << e[i] << ' ';
    cout << endl;
}