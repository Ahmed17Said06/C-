#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int data) : data(data) {}
};

void print1(Node* head)
{
    while(head != nullptr)
    {
        cout << head->data <<" ";
        head = head->next;
    }
    cout << "\n";
}

int main()
{
    // create 4 objects and set data
    Node* node1 = new Node(6);
    Node* node2 = new Node(10);
    Node* node3 = new Node(8);
    Node* node4 = new Node(15);

    // Set 4 links
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = nullptr;

    cout << node1->next->next->next->data <<"\n";
    cout << node2->next->next->data <<"\n";
    cout << node3->next->data <<"\n";
    cout << node4->data <<"\n";

    print1(node1);

    return 0;
}