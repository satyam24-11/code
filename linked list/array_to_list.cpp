#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node* next1)
    {
        data = data1;
        next = next1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *convertArr2LL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
int lengthofLL(Node*head){
    int count = 0;
    while(head){
        count++;
        head = head->next;
    }
    return count;
}
int main()
{
    vector<int> arr = {8, 2, 3, 4, 5};
    Node *head = convertArr2LL(arr);
   // cout << head->data << endl;
    Node *temp = head;
    while(temp){
        cout << temp->data <<" ";
        temp = temp->next;
    }
    int ans = lengthofLL(head);
    cout << ans << endl;
    return 0;
}


