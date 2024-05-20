#include<iostream>
using namespace std;

struct Node
{
    char data {};
    Node *right {};
    Node *left {};

    Node(int data) : data(data) {}
};

void print_inorder(Node *current)
{
    if(!current)
    {
        return;
    }
    print_inorder(current->left);
    cout << current->data << " ";
    print_inorder(current->right);
}

void print_postorder(Node *current)
{
    if (!current)
    {
        return;
    }

    print_postorder(current->left);
    print_postorder(current->right);
    cout << current->data << " ";
}


int main()
{
    Node *plus = new Node ('+');
    Node *node2 = new Node ('2');
    Node *node3 = new Node ('3');

    plus->left = node2;
    plus->right = node3;

    Node *multiply = new Node ('*');
    Node *node4 = new Node ('4');

    multiply->left = plus;
    multiply->right = node4;

    print_postorder(multiply);

    cout << "\n";
    print_inorder(multiply);


    return 0;
}