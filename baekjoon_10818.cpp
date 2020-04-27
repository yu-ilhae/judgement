#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
	int n;
	int* a;
	int min = 1000001, max = -1000001;
	cin >> n;
	a = new int[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];

	for (int i = 0; i < n; i++){
		min = isless(a[i], min) ? a[i] : min;
		max = isgreater(a[i], max) ? a[i] : max;
	}

	cout << min << " " << max;
	return 0;
}
