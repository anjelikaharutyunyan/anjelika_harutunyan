#include <iostream>
using namespace std;

struct QueueNode {
	int data;
	QueueNode* next;
	QueueNode(int d)
	{
		data = d;
		next = NULL;
	}
};

struct Queue {
	QueueNode *front, *rear;
	Queue()
	{
		front = rear = NULL;
	}

	void enQueue(int x)
	{
		QueueNode* temp = new QueueNode(x);
		if (rear == NULL) {
			front = rear = temp;
			return;
		}
		rear->next = temp;
		rear = temp;
	}
	void deQueue()
	{
		if (front == NULL)
			return;

		QueueNode* temp = front;
		front = front->next;
		if (front == NULL)
			rear = NULL;

		delete (temp);
	}
};

int main()
{
	Queue q;
	q.enQueue(10);
	q.enQueue(20);
	q.deQueue();
	q.deQueue();
	q.enQueue(30);
	q.enQueue(40);
	q.enQueue(50);
	q.deQueue();
	cout << "Queue Front : " << (q.front)->data << endl;
	cout << "Queue Rear : " << (q.rear)->data;
}
