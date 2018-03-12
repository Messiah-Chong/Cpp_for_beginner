#include<iostream>

using namespace std;

int main() {
	int a = 1;
	int &b = a; // b is a reference of a
	a = a * a;
	cout << a << " " << b << endl; // a changed so b also changed
	b = b * 5;
	cout << b << " " << a << endl; // b changed so a also changed
	cout << &a << " " << &b << endl; // a and b have the same address
	return 0;
}
