#ifndef doubleLL_H
#define doubleLL_H

#include "nodDublu.h"
#include <iostream>

using namespace std;

template<class T>
class doubleLL;

template<typename type>
ostream& operator <<(ostream& o, doubleLL<type>& list);

template <typename type>
class doubleLL{
	public:
		doubleLL();
		doubleLL(const doubleLL&);
		void push_back(type);
		nod<type>& operator[](unsigned int);
		int getSize(){
			return this->size;
		}
		void pop_back();
		friend ostream& operator << <>(ostream&, doubleLL<type>&);
	private:
		nodDublu<type>* front;
		nodDublu<type>* back;
		int size;	
};

#endif