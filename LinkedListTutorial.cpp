#include <iostream>
#include "LinkedList.h"

int main()
{
	LinkedList list;

	list.newNode(2);
	list.newNode(3);
	list.newNode(4);


	list.print();

	list.insertAtHead(0);
	list.insertAtTail(2);
	list.insertAtPosition(1, 5);
	list.insertAtTail(3);
	list.insertAtTail(4);
	list.insertAtTail(6);


	list.print();
	std::cout << "Value of Position 2: " << list.getIndexValue(2) << "\n\n";

	list.deleteAtPosition(4);
	list.deleteAtHead();
	list.deleteAtTail();

	list.print();
	std::cout << "Value of Position 2: " << list.getIndexValue(2) << "\n\n";



	return 0;
}

