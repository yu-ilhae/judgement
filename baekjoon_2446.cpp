﻿#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int k = 2*(n-i)-1; k > 0; k--) {
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 0; i < n-1; i++) {
		for (int j = n-i-2; j > 0; j--) {
			cout << " ";
		}
		for (int k = 0; k < 2*i+3; k++) {
			cout << "*";
		}
		cout << endl;
	}
}
