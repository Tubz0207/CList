#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#include "CircularLinkList.h"


class Queue {
private:
	CList List;

public:
	//~Queue();
	int size(); //tells you the number of items in the ADT

	void enqueue(char o); //inserts item at the back of queue

	void dequeue(char num); //removes an item from the front of the queue

	bool isEmpty(); //checks to see if ADT is empty

	char front(); //tells us the element at the front of the queue without removing it

	char back(); // tells us the element at the back of the queue without removing it

	void clear(); //makes the ADT empty

	int displayQueue(); // Displays items in queue

};

#endif 