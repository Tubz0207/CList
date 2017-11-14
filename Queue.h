#include<iostream>
#include<string>
#include "List.h"
using namespace std;

class Queue
{
public:
	Queue::Queue(List k)
	{
		k.List();
}

	void Queue::~Queue()
	{
		if (k.size() != k.isEmpty())
		{
			k.destroy();
		}
}

	int Queue::isEmpty()
	{
		if (k.size() == 0)
		{
			return k.size();
		}
		else 
			return -1;
}

	char Queue::front()
	{
		if (k.size() != 0)
		{
			k.front();
		}
	}
	char Queue::back()
	{
		if (k.rear() != 0)
		{
			k.rear();
		}
	}
	void Queue::enqueue(k)
	{
		int o = 0;
		k.InsertatAnt(char c,int o);
		o++;
	}
	void Queue::dequeue()
	{
		k.delete_ele();
	}

private:
	int maxQueueSize;
	int count;
	int queueFront;
	int queueRear;
	List k = {};
}