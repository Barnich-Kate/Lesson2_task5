#include <iostream>
#include <math.h>
using namespace std;
int main() {
	
	float N, div, rest;
	cout << "Type the value of number N more than 0: ";
	cin >> N;
	while (N > 0) {
		cout << N%10;
		cout <<  N/10;
	}
}
