#include<iostream>

using namespace std;

int main() {
	int a = 1, b = 2;
	#define PI 3.14159
	#define R a + b
	cout << PI * R * R << endl; // wrong output because PI * R * R will be
	                            // 3.14159 * a + b * a + b instead of
	                            // 3.14159 * (a + b) * (a + b)
}
