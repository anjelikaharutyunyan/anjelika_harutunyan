#include "deque.h"

Deque::~Deque() {

    _deque.~LinkedList();
}

void Deque::PushFront(int value) {

    _deque.AddAt(0, value);    
}

void Deque::PushBack(int value) {
    
    _deque.Add(value);
}
        
int Deque::PopFront() {

    int temp = _deque.GetElementAt(0);
    _deque.RemoveAt(0);
    return temp;
}

int Deque::PopBack() {

    int temp = _deque.GetElementAt(_deque.Count() - 1);
    _deque.RemoveLast();
    return temp;    
}
        
int Deque::PeekFront() {

    return _deque.GetElementAt(0);
}

int Deque::PeekBack() {

    return _deque.GetElementAt(_deque.Count() - 1);
}

bool Deque::isEmpty() {

    return _deque.Count() == 0;
}
        
ostream& operator << (ostream &COUT, const Deque& deque) {
    
    return COUT << deque._dequeContainer;
}
