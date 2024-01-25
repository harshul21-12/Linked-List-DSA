#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int data;
        Node* next;
        Node* prev;
        Node(int data1)
        {
            data=data1;
            next=nullptr;
            prev=nullptr;
        }
};
Node* convertLL(vector<int> &arr)
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
        head=head->prev;
    }
}
int main()
{
    vector<int> arr={2,7,4,3};
    Node* head=convertLL(arr);
    Node* temp=head;
    while (head->next)
    {
        head=head->next;
        head->prev=temp;
        temp=head;
    }
    print(head);
}