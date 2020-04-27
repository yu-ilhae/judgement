#include <iostream>
using namespace std;

int main() {
	int data[10];
	int cnt = 1;

	for (int i = 0; i < 10; i++) {
		cin >> data[i];
		data[i] %= 42;
	}
	for (int i = 0; i < 10; i++)
		for (int j = i+1; j < 10; j++) {
			if (data[i] == data[j]) break; 
			else if (j == 9) cnt++;
		}
	for (int i = 0; i < 10; i++) cout << data[i] << " ";
	cout << cnt;
	return 0;
}