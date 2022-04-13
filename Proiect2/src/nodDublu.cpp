#include "../include/nodDublu.h"
#include <iostream>

using namespace std;

template <typename type>
nodDublu<type>::nodDublu(type element):nod<type>(element){
	this->prev = NULL;
}

template <typename type>
nodDublu<type>::nodDublu():nod<type>(){
	this->prev = NULL;
}

template<typename type>
void nodDublu<type>::setPrev(nod<type>* prevToSet){
	this->prev = prevToSet;
}

template<typename type>
nod<type>* nodDublu<type>::getPrev(){
	return this->prev;
}

template<typename type>
nodDublu<type>::nodDublu(const nodDublu<type>& nodToCopy):nod<type>(nodToCopy){
	this->back = NULL;
}

template<typename type>
nodDublu<type>::~nodDublu(){
	if(this->getNext() != NULL){
		this->prev->setNext(this->getNext());
	}
}