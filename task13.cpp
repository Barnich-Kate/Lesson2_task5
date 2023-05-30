#include <iostream>
#include <math.h>
using namespace std;
int main() {
	
	float A, K, summ;
	K = 1;
	cout << "Type the value of number A more than 1: ";
	cin >> A;
	while (summ <= A) {
		K++;
		summ += 1 / K;
	}

	cout << "Summ: " << endl;
	cout << "K is equal: "<< K;
}
