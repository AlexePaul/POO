#ifndef doubleLL_H
#define doubleLL_H

#include "nod.h"

template <typename type>
class doubleLL{
	public:
		doubleLL();
		push_back(type);
	private:
		nodDublu<type>* front;
		nodDublu<type>* back;
		int size;	
};

#endif