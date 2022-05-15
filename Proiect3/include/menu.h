#ifndef menu_H
#define menu_H

#include "repoList.h"
#include "nod.h"

// Singleton design pattern, no object can be created

template<typename type>
class menu{
public:
	static void runMenu();
private: 
	menu();
};

#endif