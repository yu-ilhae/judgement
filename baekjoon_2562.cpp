#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
	int* a;
	int min, max, cnt = 0;

	a = new int[9];
	for (int i = 0; i < 9; i++)
		cin >> a[i];

	min = a[0], max = a[0];

	for (int i = 0; i < 9; i++) {
		max = isgreater(a[i], max) ? a[i] : max;
	}

	int i = 0;
	while (max != a[i]) {
		i++, cnt++;
	}
	cout << max << endl << cnt;
	
	return 0;
}
