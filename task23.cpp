#include <iostream>
#include <math.h>
using namespace std;
int main() {
	
	int A, B;
	cout << "Type number A: ";
	cin >> A;
	cout << "Type number B: ";
	cin >> B;
	while (A!=0 && B!=0) {
		if (A>B) {
			A = A%B;
		} else {
			B = B%A;
		}
	cout << "NOD is equal: " << A+B;
	}
	return 0;
	}
