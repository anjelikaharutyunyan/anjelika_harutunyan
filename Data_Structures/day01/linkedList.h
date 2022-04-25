#ifndef LINKED_LIST_H
#define LINKED_LIST_H

class Node
{
public:
    int value;
    Node *next;
    Node();
};

class LinkedList
{
private:
    Node *head;
    Node *tail;

public:
    LinkedList();
    void add(int);
    void addAt(Node *, int);
    void remove();
    void removeAt(Node *);
    void display();
    Node *getHead();
    int countOfNodes();
    int getElement(int);
};
#endif