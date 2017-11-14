#ifndef CLIST_H
#define CLIST_H
#include <stdio.h>
using namespace std;

class CList
{
private:

	class Node;
	Node *last, *front;
	int num_elements = 0;


public:

	void createANode(int value);
	void addToFront(int value);
	char Front();
	char Back();
	void deleteElement(int value);
	char displayList();
	void addToBack(int value, int position);
	void deleteEnd();


	CList() {
		front = NULL;
	}