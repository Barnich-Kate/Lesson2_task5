#include <iostream>
#include <math.h>
using namespace std;
int main() {
	
	int N, summ, div, quant, percent;
	quant = 0;
	summ = 0;
	cout << "Type the value of number N more than 0: ";
	cin >> N;
	while (N > 0) {
		++quant;
		percent = N % 10;
		div = N / 10;
		summ = percent + div;
	}
	cout << "Quante: " << quant << endl;
	cout << "Summ: " << summ << endl;
}
