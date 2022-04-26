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
    private:
        Node *_head;
        Node *_tail;
        int _count;
    public:
        LinkedList();
        ~LinkedList();
        void Add(int);             
        void AddAt(int, int);      
        void RemoveLast();        
        void RemoveAt(int);      
        void RemoveAll();       
        int GetElementAt(int);
        int Count();            
        friend ostream& operator << (ostream& COUT, const LinkedList& list);    
};

#endif
