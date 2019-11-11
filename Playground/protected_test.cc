#include <iostream>
using namespace std;
class A{
	int a;
protected:
	int b;
public:
	A(int a, int b): a{a}, b{b} {}
	void printA() {
		cout << a <<endl;
	}
	void printBB() {
		cout << b << endl;
	}
};

class B: public A{
public:
	void printB(){
		cout << b << endl;		
	}
	B(int a, int b): A{a , b} {}
};

int main(){
	B x = {1, 2};
	x.printA();
	x.printBB();
	x.printB();
}
