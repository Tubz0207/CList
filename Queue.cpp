#include "Queue.h"
#include "CList.h"
#include <stdio.h>
#include <iostream>
using namespace std;

int Queue::size() {

	cout << "The size of the Queeue is " << List.size() << endl;

	return List.size();


}

void Queue::enqueue(char ch) {

	if (List.size() == 0) {
		List.createANode(ch);
		return;
	}
	List.addAtBack(ch, List.size());
}

void Queue::dequeue(char value) {
	List.deleteElement(value);

}

int Queue::displayQueue() {
	cout << "The Queue is " << endl;
	return List.displayList();
}

bool Queue::isEmpty() {
	if (size() != 0) {
		return false;
	}
	return true;
}

char Queue::front() {
	return List.front();
}

char Queue::back() {
	return List.Back();
}
void Queue::clear() {
	while (List.size() > 0) {
		List.deleteEnd();
	}
}
