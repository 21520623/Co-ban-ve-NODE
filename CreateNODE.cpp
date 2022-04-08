// CreateNODE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct NODE {
	int data;
	NODE* pNext;
};
//List
struct List {
	NODE* pHead;
	NODE* pTail;
};
//Tao NODE
NODE* createNODE(int x) {
	NODE* p = new NODE;
	if (p == NULL) return NULL;
	p->data = x;
	p->pNext = NULL;
	return p;
}
//Tao list
void createLIsT(List& l) {
	l.pHead = l.pTail = NULL;
}
//Them NODE dau danh sach
void Addhead(List& l, NODE* p) {
	if (l.pHead == NULL) //danh sach rong
	{
		l.pHead = p;
		l.pTail = l.pHead;
	}
	else {
		p->pNext = l.pHead; //gan qua tro next
		l.pHead = p; //gan vi tri dau bang node moi
	}
}
//Them NODE vao cuoi danh sach 
void Addtail(List& l, NODE* p) {
	if (l.pHead == NULL) //danh sach rong
	{
		l.pHead = l.pTail = p; // danh sach bang NODE moi
	}
	else {
		l.pTail->pNext = p;
		l.pTail = p;
	}
}
//Them mot NODE sau vi tri q
void AddafterQ(List& l, NODE* p, NODE* q) {
	//Them mot NODE dang sau q
	if (q != NULL) {
		p->pNext = q->pNext;
		q->pNext = p;
		if (q == l.pTail)//q là NODE cuoi
		{
			l.pTail = p;
		}
	}
	else //list rong
	{
		Addhead(l, p);
	}
}

int main()
{
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
