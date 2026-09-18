#include <iostream>

struct Node 
{
    int value ;
    Node* next;
};

Node* reverseList(Node* head)
{
    Node* prev = nullptr;
    Node* current = head;

    while(current != nullptr)
    {
        Node* next = current->next;
        current->next = prev;
        prev = current ;
        current = next;
    }

    return prev;

}