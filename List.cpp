/*
 * List.cpp
 *
 *  Created on: Oct 13, 2015
 *      Author: Steve
 */

#include "List.h"

List::List() {
	mySize = 0;
	myFirst = NULL;
	myLast = NULL;

}

List::Node::Node() {
	myItem = 0;
	myNext = NULL;
}

List::~List() {
	// TODO Auto-generated destructor stub
}

List::Node::Node(Item it, List::Node* next) {
	myItem = it;
	myNext = next;
}

unsigned List::getSize() const {
	return mySize;
}

Item List::getFirst() const {
	return *myFirst;
}

Item List::getLast() const {
	return *myLast;
}

void List::append(const Item& it) {
	List::Node* nodePtr = new List::Node(it,NULL);
	if(mySize == 0){
//		myFirst = nodePtr;
	}else{

	}
}
