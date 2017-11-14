#include <iostream>
#include <string>
using namespace std;

class Node
{
	Node info;
	Node* link;
};

class List
{
private:
	Node* Head;
	int count;
	Node* first;
	Node* last;

public:
	List::List()
	{
		first = NULL;
		last = first;
		count = 0;
	}

	int List::isEmpty()
	{
		if (first == NULL)
		{
			return 0;
		}
		else
			return -1;
	}

	void List::destroy()
	{
	Node* temp;
	while (first != NULL)
	{
		temp = first;
		first = first->link;
		delete temp;
	}
	last = NULL;
	count = 0;
	}

	void List::print()
	{
		Node* current;
		current = front;
		while (current != NULL)
		{
			cout << current->info << " ";
			current = current->link;
		}
	}
	
	int List::length()
	{
		return count;
	}

	char List::front()
	{
		if (front != NULL);
		{
			return first->info;
		}
	}

	char List::rear()
	{
		if (last != NULL)
		{
			return last->info;
		}
	}

	char List::Insert(char n)
	{
		Node* newNode;
		newNode->info = n;
		newNode->link = first;
		first = newNode;
		last = newNode;
	}
	char List::InsertatAny(char n, int o)
	{
		if (size() <= o)
		{
			Node* newNode = n;
			Node* temp = first;
			if (o == 1)
			{
				Insert(n);
			}
			newNode->link = list[o - 1];
		}
		count++
	}
	void List::delete_ele (int num)
	{
		Node* temp;
		for (int i = 1; int < size(); i++)
		{
			if (List[i] == num)
			{
				List[i - 1]->link = List[i]->link;
				List[i - 1]->info = List[i] - info;
				List[i] = NULL;
				return 0;
			}
			return -1;
		}
		count--;
	}
}