#include "student.h"
#include "grupa.h"
#include <iostream>

using namespace std;

void fluxTestare1(){
	grupa gr1, gr2;
	cin >> gr1 >> gr2;
	student st, st2;
	cin >> st >> st2;
	gr1.adaugaStudent(st);
	gr1.scoateStudent(st2.getNume());
	cout << "grupa1: \n" << gr1 << '\n';
	cout << "grupa2: \n" << gr2 << '\n';
}

void fluxTestare2(){
	grupa gr1;
	cin >> gr1;
	student st;
	cin >> st;
	cout << "Media Grupei inainte de adaugarea noului student: " << gr1.mediaGrupei() << '\n';
	gr1.adaugaStudent(st);
	cout << "Media Grupei dupa de adaugarea noului student: " << gr1.mediaGrupei() << '\n'	;
}

int main(){
	fluxTestare1();
	fluxTestare2();
	return 0;
}