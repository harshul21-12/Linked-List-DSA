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
Node* convertLL(vector<int> &arr)
{
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for (int i=1;i<arr.size();i++)
    {
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=mover->next;
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
    vector<int> arr={2,7,4,3};
    Node* head=convertLL(arr);
    int n=3;
    int k=5;
    int cnt;
    Node* temp=head;
    if (head)
    {
        cnt=1;
        while (temp)
        {
            if (cnt!=n-1)
            {
                temp=temp->next;
                cnt++;
            }
            else
            {
                Node* temp1=new Node(k);
                temp1->next=temp->next;
                temp->next=temp1;
                break;
            }
        }
        
    }
    print(head);
}