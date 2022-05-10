#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <ostream>

using namespace std;

class Node {
    public:
        int _data;
        Node *_next;
        Node();
};

class LinkedList {
    public:
        Node *_head;
        Node *_tail;
        int _count;
        LinkedList();
        ~LinkedList();
        void Add(int);              // Add a node at the end of list
        void AddAt(int, int);       // Add a node after the given node 
        void RemoveLast();          // Remove the last node of list
        void RemoveAt(int);         // Remove node of the given index
        void RemoveAll();           // Remove all the nodes
        int GetElementAt(int);      // Get element of the given node
        int Count();                // Get count of nodes
        friend ostream& operator << (ostream& COUT, const LinkedList& list);    
};

Node::Node() {

    _next = NULL;
}

LinkedList::LinkedList() {

    _head = NULL;
    _tail = NULL;
    _count = 0;
}

LinkedList::~LinkedList() {

    RemoveAll();
}

void LinkedList::Add(int value) {

    Node *new_node = new Node;
    new_node->_data = value;
    new_node->_next = NULL;

    if (_head == NULL) {
        _head = new_node;
        _tail = new_node;
    } else {
        _tail->_next = new_node;
        _tail = _tail->_next;
    }
    ++_count;
}

void LinkedList::AddAt(int index, int value) {
    
    Node *new_node = new Node();
    new_node->_data = value;
    if (index == 0) {
        new_node->_next = _head;
        _head = new_node;
    } else {
        Node *temp = _head;
        for (int i = 0; i < index - 1; i++) {
            temp = temp->_next;
        }

        new_node->_next = temp->_next;
        temp->_next = new_node;
    }
    ++_count;
}

void LinkedList::RemoveLast() {

    RemoveAt(Count() - 1);
}

void LinkedList::RemoveAt(int index) {

    if (index == 0) {
        Node* tmp = _head;
        _head = _head->_next;
        delete tmp; 
    } else  {
        Node *prev = _head;

        for (int i = 0; i < index - 1; i++) {
            prev = prev->_next;
        }
        Node *temp;
        temp = prev->_next;
        prev->_next = temp->_next;
        delete temp;
        
    } 
    --_count;

    /*if (Count() > 1 && index < Count()) {
        if (index > 0) {
            Node* prev = GetElementAt(index - 1);
            Node* temp = prev->_next;
            prev->_next = temp->_next;
            delete temp;
            --_count;
        } else if (index == 0) {
            Node* tmp = _head->_next;
            delete _head;
            _head = tmp;
            --_count;
        }
    } else {
        _count = 0;
        _head = NULL;
        _tail = NULL;
    }*/
}

void LinkedList::RemoveAll() {

    while (_count > 0) {
        RemoveLast();
    }
}

int LinkedList::GetElementAt(int index) {

    int count = 0;
    Node *temp = _head;
    while (temp != NULL) {
        if (count == index) {
            return temp->_data;
        }
        ++count;
        temp = temp->_next;
    }
    return 0;
}

int LinkedList::Count() {

    return _count;
}

ostream& operator << (ostream& COUT, const LinkedList& list) {

    Node *temp = list._head;
    while (temp != NULL) {
        COUT << temp->_data << ", ";
        temp = temp->_next;
    }
    COUT << endl;
    return COUT;
}

#endif