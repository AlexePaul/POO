#include <iostream>
#include "./src/doubleLL.cpp"
using namespace std;

int main(){
doubleLL<int>t;
long long n,x;
	while(true){
		cout << "1. Adauga un element la sfarsitul listei\n";
		cout << "2. Scoate Un element de la sfarsitul listei\n";
		cout << "3. afiseaza lista\n";
		cin >> x;
		switch (x){
			case 1:
				cin >> n;
				t.push_back(n);
				break;
			case 2:
				t.pop_back();
				break;		
			case 3:
				cout << t;
				break;
		}
	}
}