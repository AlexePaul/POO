#include <iostream>
#include "./include/menu.h"
#include "./src/menu.cpp"

using namespace std;

int main(){
	cout << "Data type for the program: ";
	DataInput:
	string data;
	getline(cin, data);
	if(data == "int"){
 		menu<int>::runMenu();
 		return 0;
	}
 	if(data == "long long"){
 		menu<long long>::runMenu();
 		return 0;
 	}
 	if(data == "char"){
 		menu<char>::runMenu();
 		return 0;
 	}
 	if(data == "float"){	
 		menu<float>::runMenu();
 		return 0;
 	}
	cout << "Please choose a valid data type: \n";
 	goto DataInput;
}