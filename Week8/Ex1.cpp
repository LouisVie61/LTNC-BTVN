#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
};
node *createNode(int num)
{
    node* p = new node;
    p -> data = num;
    p -> next = NULL;
    return p;
}
node *addElementAtTheEnd(node *old, int newNum)
{
    node *p = createNode(newNum);
    old -> next = p;
    return p;
}
void printList(node *old)
{
    node *p = old;
    while( p != NULL)
    {
        cout << p -> data << '\n';
        p = p -> next;
    }
}
int main()
{
    int n; cin >> n;
    int x; cin >> x;
    node *head = createNode(x);
    node *p = head;
    for(int i = 1; i < n; i++)
    {
        cin >> x;
        p = addElementAtTheEnd(p, x);
    }
    printList(head);
    return 0;
}
