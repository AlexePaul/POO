#ifndef nodDublu_H
#define nodDublu_H

#include "nod.h"

template <typename type>
class nodDublu : public nod<type>{
public:
	nodDublu(type);
	void setPrev(nod<type>*);
	nod<type>* getPrev();	
private:
	nod<type>* prev;
};

#endif