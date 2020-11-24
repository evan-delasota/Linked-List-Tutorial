#pragma once

#include <cstddef>
#include <iostream>

struct node {
	int val;
	node* next;

	int getVal() { return this->val; }
};
class LinkedList
{
public:
	LinkedList();
	~LinkedList() {}

	void newNode(int);
	int getIndexValue(int);
	void print();

	void insertAtPosition(int, int);
	void insertAtHead(int);
	void insertAtTail(int);

	void deleteAtPosition(int);
	void deleteAtHead();
	void deleteAtTail();
private:
	node* head;
	node* tail;
	int size;

};

