// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
struct Node
{
    Node *prev;
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = prev = nullptr;
    }
};
void insert_at_start(Node *&head, int value)
{
    Node *newNode = new Node(value);
    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}
void display(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    Node *head = nullptr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        insert_at_start(head, element);
    }
    display(head);
    return 0;
}