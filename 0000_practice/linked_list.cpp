
#include <iostream>
#include <vector>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
    Node()
    {
        data = 0;
        next = nullptr;
    }

    Node(int new_data)
    {
        data = new_data;
        next = nullptr;
    }
};

int main()
{
    Node *head = new Node(10);
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);
    Node *n4 = new Node(40);
    Node *n5 = new Node(50);
    Node *tail = new Node(60);

    head->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = tail;

    Node *temp = head;
    while (head != nullptr)
    {
        cout << temp->data << " --> ";
        temp = temp->next;
    }

    return 0;
}