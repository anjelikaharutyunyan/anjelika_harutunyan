#include "../day1/linked_list.h"
#include "deque.h"
#include <iostream>

int main() {
    Deque d;
   for (int i = 0; i < 20; i++) {
        d.PushBack(rand() % 10);
    }   
    cout << d;
    d.PushFront(12);
    cout << d;
    d.PushBack(20);
    cout << d;
    d.PopFront();
    d.PopBack();
    cout << d;
    cout << "The deleted value from the beginning is " << d.PeekFront() << endl;
    cout << "The deleted value from the end is " << d.PeekBack() << endl;
    
    return 0;
}
