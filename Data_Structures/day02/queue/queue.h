#ifndef QUEUE_H
#define QUEUE_H

#include "../day01/linkedList.h"

class Queue {
    private:
        LinkedList _queue;
    public:
        Queue() = default;
        ~Queue() = default;
        void PushBack(int);
        int PopFront();
        bool isEmpty();
        friend ostream& operator << (ostream& COUT, const Queue&);
};

#endif
