#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int low(int, int);

int main() {
	int ham1, ham2, ham3;
	int rev1, rev2;
	int min_ham, min_rev;
	
	cin >> ham1 >> ham2 >> ham3 >> rev1 >> rev2;
	
	min_ham = low(low(ham1, ham2), ham3);
	min_rev = low(rev1, rev2);

	cout << min_ham + min_rev - 50;
	return 0;
}

int low(int a, int b) {
	return (a < b) ? a : b;
}