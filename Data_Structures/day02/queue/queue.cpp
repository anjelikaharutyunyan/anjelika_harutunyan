#include "queue.h"
#include <iostream>

void Queue::PushBack(int value) {
        
    _queue.Add(value);
}

int Queue::PopFront() {
    
    int temp = _queue.GetElementAt(0);
    _queue.RemoveAt(0);
    return temp;
}

bool Queue::isEmpty() {
    
    return _queue.Count() == 0;
}

ostream& operator << (ostream &COUT, const Queue& queue) {
    
    return COUT << queue._queue;
}
