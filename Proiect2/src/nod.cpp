#include "../include/nod.h"
#include <iostream>

using namespace std;

template<typename type>
nod<type>::nod(type element){
	this->value = element;
	this->next = NULL;
}

template<typename type>
void nod<type>::setNext(nod* nextToSet){
	this->next = nextToSet;
}