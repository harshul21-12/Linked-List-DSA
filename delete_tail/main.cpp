#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int data;
        Node* next;
        Node(int data1)
        {
            data=data1;
            next=nullptr;
        }
};
Node* constructLL(vector<int>& arr) 
{
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for (int i=1;i<arr.size();i++)
    {
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
void print(Node* head)
{
    while (head)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main()
{
    vector<int> arr= {2,7,4,3};
    Node* head= constructLL(arr);
    if (head)
    {
        if (head->next==NULL)
        {
            head=nullptr;
        }
        Node*temp=head;
        while (temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;
    }
    print(head);
}

