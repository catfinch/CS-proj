/*
 * List.h
 *
 *  Created on: Oct 13, 2015
 *      Author: Steve
 */

#ifndef LIST_H_
#define LIST_H_

typedef double Item;
#include <iostream>
using namespace std;
class List {
public:
	List();
	virtual ~List();
	unsigned getSize() const;
	Item getFirst() const;
	Item getLast() const;
	void append(const Item& it);
private:
	unsigned mySize;
	Item* myFirst;
	Item* myLast;
	struct Node{
		Node();
		Node(Item it, List::Node* next);
		Item myItem;
		List::Node* myNext;
	};

	friend class ListTester;
};

#endif /* LIST_H_ */
