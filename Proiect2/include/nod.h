#ifndef nod_H
#define nod_H

template <typename type>
class nod{
public:
	nod(type);
	virtual void setNext(nod*);
	nod<type>* getNext(){
		return next;
	}
	type getValue(){	
		return value;
	}
private:
	type value;
	nod<type>* next;
};

#endif