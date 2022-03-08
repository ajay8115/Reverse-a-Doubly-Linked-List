// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

Node *reverseDLL(Node *head)
{
    if (head == NULL or head->next == NULL)
    {
        return head;
    }

    Node *peh = NULL;
    Node *cur = head;
    while (cur != NULL)
    {
        Node *temp = cur->next;
        cur->prev = temp;
        cur->next = peh;
        peh = cur;
        cur = temp;
    }

    return peh;
}