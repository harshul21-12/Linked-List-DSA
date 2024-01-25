#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node* constructLL(vector<int>& arr) 
{
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void print(Node* head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    vector<int> arr = {2, 7, 4, 3};
    int k = 3;
    Node* head = constructLL(arr);
    Node* temp = head;
    Node* temp1; 
    int ctr;
    if (head)
    {
        ctr = 1;
        if (k == 1)
        {
            temp1 = head;
            head = head->next;
            free(temp1);
        }
        else
        {
            while (temp)
            {
                if (ctr != k - 1)
                {
                    temp = temp->next;
                    ctr++;
                }
                else
                {
                    temp1 = temp->next;
                    temp->next = temp->next->next;
                    free(temp1);
                    break;  // Break out of the loop after deleting the kth node
                }
            }
        }
    }
    print(head);
}

