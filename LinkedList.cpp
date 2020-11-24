#include "LinkedList.h"

LinkedList::LinkedList() {
	head = NULL;
	tail = NULL;
	size = 0;

}


void LinkedList::newNode(int value) {
	node* temp = new node();
	temp->val = value;
	temp->next = NULL;

	if (head == NULL) {
		head = temp;
		tail = temp;
		temp = NULL;

	}
	else {
		tail->next = temp;
		tail = temp;

	}
	this->size++;

}


int LinkedList::getIndexValue(int target) {
	if (target >= this->size || target < 0) {
		std::cout << "Invalid target input.\n";
		return -1;
	}
	node* temp = head;

	for (int i = 0; i != target - 1; ++i) {
		temp = temp->next;
	}

	return temp->getVal();
}

void LinkedList::print() {
	node* temp = head;
	std::cout << "Printing Linked List...\n";
	for (int i = 0; temp != NULL; ++i) {
		std::cout << "Position: " << i + 1 << " | Value: " << temp->getVal() << "\n";
		temp = temp->next;
	}
	std::cout << "\n";

}

void LinkedList::insertAtPosition(int target, int value) {
	if (target > this->size || target < 0) {
		std::cout << "Invalid index given.\n";
		return;
	}

	node* prev = new node();
	node* current = head;
	node* temp = new node();

	if (target == 0) {
		temp->val = value;
		temp->next = this->head;
		this->head = temp;
	}
	else if (target == size) {
		temp->val = value;
		tail->next = temp;
		tail = temp;
	} else {
		for (int i = 0; i < target; ++i) {
			prev = current;
			current = current->next;
		}
		temp->val = value;
		temp->next = current;
		prev->next = temp;
	}
	this->size++;

}

void LinkedList::insertAtHead(int value) {
	insertAtPosition(0, value);

}

void LinkedList::insertAtTail(int value) {
	insertAtPosition(size, value);
}


void LinkedList::deleteAtPosition(int target) {
	if (target > this->size || target < 0) {
		std::cout << "Not a valid target index.\n";
		return;
	}

	node* prev = new node();
	node* current = head;

	if (target == 0) {
		prev = this->head;
		head = head->next;
	}
	else {
		for (int i = 0; i < target; ++i) {
			prev = current;
			current = current->next;
		}
		prev->next = current->next;

	}
	this->size--;

}

void LinkedList::deleteAtHead() {
	deleteAtPosition(0);
}

void LinkedList::deleteAtTail() {
	deleteAtPosition(size - 1);
}


