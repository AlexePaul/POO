#include "../include/nodDublu.h"
#include <iostream>

using namespace std;

template <typename type>
nodDublu<type>::nodDublu(type element):nod<type>(element){
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