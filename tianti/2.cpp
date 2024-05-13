#include<iostream>
using namespace std;
// 链表节点类型
typedef struct Poly{
	int a, b;
	struct Poly* next;
}Poly;
// 链表头节点的生成
void Get_Head(Poly& Head) {
	Poly* L;
	L = new Poly;
	L->next = NULL;
	Head = *L;
}
// 尾插法插入元素
void Get_Elem(Poly& Head) {
	Poly* L;
	Poly* S;
	int n, i, a, b;
	cin >> n;
	S = &Head;
	for (i = 0; i < n; i++) {
		L = new Poly;
		L->next = NULL;
		cin >> a >> b;
		if (a != 0) {
			L->a = a;
			L->b = b;
			S->next = L;
			S = L;
		}
	}
}
// 显示这个链表
void ShowLnode(Poly& P) {
	Poly* L = &P;
	if (L->next != NULL) {
		L = L->next;
		while (L) {
			if (L->next)
				cout << L->a << " " << L->b << " ";
			else
				cout << L->a << " " << L->b << endl;
			L = L->next;
		}
	}
	else
		cout << 0 << " " << 0 << endl;
}
// 多项式的加法运算
void Addition(Poly First, Poly Second, Poly &Result) {
	Poly* F;
	Poly* S;
	Poly* R;
	R = &Result;
	F = &First;
	F = F->next;
	S = &Second;
	S = S->next;
	while (F != NULL && S != NULL) {
		Poly* L;
		if (F->b > S->b) {
			L = new Poly;
			L->next = NULL;
			L->a = F->a;
			L->b = F->b;
			F = F->next;
			R->next = L;
			R = L;
		}
		else if (F->b < S->b) {
			L = new Poly;
			L->next = NULL;
			L->a = S->a;
			L->b = S->b;
			S = S->next;
			R->next = L;
			R = L;
		}
		else {
			if (F->a + S->a != 0) {
				L = new Poly;
				L->next = NULL;
				L->a = F->a + S->a;
				L->b = F->b;
				R->next = L;
				R = L;
			}
			F = F->next;
			S = S->next;
		}
	}
	if (F != NULL) {
		R->next = F;
	}
	else {
		R->next = S;
	}
	
}
// 多项式乘法运算
void Multiplication(Poly First, Poly Second, Poly& Result) {
	Poly* F;
	Poly* S;
	Poly* R;
	Poly Mid[1000];
	int i, j;
	R = &Result;
	F = &First;
	S = &Second;
	F = F->next;
	S = S->next;
	for (i = 0; S != NULL; S = S->next, i++) {
		Get_Head(Mid[i]);
		Poly* L;
		L = &Mid[i];
		Poly* M = F;
		while (M != NULL) {
			Poly* P;
			P = new Poly;
			P->a = M->a * S->a;
			P->b = M->b + S->b;
			P->next = NULL;
			L->next = P;
			L = P;
			M = M->next;
		}
	}
	if (i == 1) {
		R->next = &Mid[0];
	}
	else {
		Poly Mid_R[1000];
		Get_Head(Mid_R[0]);
		Addition(Mid[0], Mid[1], Mid_R[0]);
		int k;
		for (j = 2, k = 1; j < i ; j++, k++) {
			Get_Head(Mid_R[k]);
			Addition(Mid[j], Mid_R[k - 1], Mid_R[k]);
		}
		Result = Mid_R[k - 1];
	}
}

int main() {
	Poly First;
	Poly Second;
	Poly Result1;
	Get_Head(Result1);
	Poly Result;
	Get_Head(Result);
	Get_Head(First);
	Get_Head(Second);
	Get_Elem(First);
	Get_Elem(Second);
	Multiplication(First, Second, Result);
	ShowLnode(Result);
	Addition(First, Second, Result1);
	ShowLnode(Result1);
	return 0;
}

