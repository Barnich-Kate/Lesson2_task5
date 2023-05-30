#include <iostream>
#include <math.h>
using namespace std;
int main() {
	
	int N, f, f1, f2;
	cout << "Type number N: ";
	cin >> N;
	f = 0; 
	f1 = 1;
	f2 = 1;
	while (f < N) {
		f = f2 + f1;
		f2 = f1;
		f1 = f;
	}
	
	if (f==N) {
		cout << "True"; 	
	} else {
		cout << "False";
	}
}
    
