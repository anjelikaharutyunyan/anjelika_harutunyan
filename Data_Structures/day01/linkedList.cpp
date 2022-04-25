#include <iostream>
#include "linkedList.h"
using namespace std;

Node ::Node()
{
    next = NULL;
}
LinkedList ::LinkedList()
{
    head = NULL;
    tail = NULL;
}
void LinkedList ::add(int number)
{
    Node *new_node = new Node;
    new_node->value = num;
    new_node->next = NULL;

    if (head == NULL)
        head = tail = new_node;
}
else
{
    tail->next = new_node;
    tail = tail->next;
}
}
void LinkedList ::addAt(Node *prev_node, int value)
{
    if(prev_node == NULL){
        return;
    }
    Node *new_node = new Node();
    new_node->value = value;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}
void LinkedList ::remove()
{
    Node *temp1 = head;
    if (temp1 == NULL)
    {
        cout << "List is empty" << endl;
    }
    else if (temp1->next == NULL)
    {
        delete (temp1);
        temp1 = NULL;
    }
    else
    {
        Node *temp2 = head;
        while (temp2->next->next != NULL)
        {
            temp2 = temp2->next;
        }
        delete (temp2->next);
        temp2->next = NULL;
    }
}
void LinkedList ::removeAt(Node *number)
{
    Node *temp;
    temp = number->next;
    number->next = temp->next;
    delete temp;
}
int LinkedList::GetElement(int index)
{

    int count = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        if (count == index)
        {
            return temp->data;
        }
        count++;
        temp = temp->next;
    }
}

int LinkedList::CountOfNodes()
{

    Node *temp = head;
    int count = 0;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
Node *LinkedList::getHead()
{
    return head;
}

void LinkedList::Display()
{
    if (head == NULL)
    {
        cout << "Linked list is empty" << endl;
    }
    else
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << ", ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
}
