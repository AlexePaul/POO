#include "../include/doubleLL.h"
#include "../include/nod.h"
#include "nodDublu.cpp"
#include "nod.cpp"
#include <iostream>

using namespace std;

template<typename type>
doubleLL<type>::doubleLL(){
	this->size = 0;
	this->front = NULL;
	this->back = NULL;
}

template<typename type>
void doubleLL<type>::push_back(type element){
	if(this->front == NULL){
		nodDublu<type>* x = new nodDublu<type>(element);	
		this->front = x;
		this->back = x;
	}
	else{
		nodDublu<type>* x = new nodDublu<type>(element);
		x->setNext(NULL);
		this->back->setNext(x);
		x->setPrev(this->back);
		this->back = x;
	}
	this->size++;
}

template<typename type>
void doubleLL<type>::pop_back(){
	nod<type>* x = this->back->getPrev();
	delete this->back;
	this->back = dynamic_cast< nodDublu<type>* >(x);
	this->size--;
}

template<typename type>
type doubleLL<type>::operator [](unsigned index){
	if(index >= this->size)
		return -1;
	nod<type>* x = this->front;
	for(int i = 0; i < index; i++)
		x = x->getNext();
	return x->getValue();
}

template<typename type>
ostream& operator <<(ostream& o, doubleLL<type>& list){
	nod<type>* x = list.front;
	for(int i = 0; i < list.getSize(); i++){
		o << x->getValue() << ' ';
		x = x->getNext();
	}
	o << '\n';
	return o;
}