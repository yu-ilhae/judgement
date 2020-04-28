#include <iostream>
#include <cmath>
bool isComposite(const int& n);
using namespace std;
int main() {
	int in_min, in_max;

	cin >> in_min >> in_max;
	for (int i = in_min; i <= in_max; i++) {
		if (isComposite(i) == true) {
			cout << i << endl;
		}
	}

	return 0;
}
bool isComposite(const int & n) {
	if (n == 1) return false;
	int check_point = (int)ceil(sqrt(n));
	for (int i = 2; i <= check_point; i++) {
		if (n % i == 0 && i <= check_point) return false;
	}
	return true;
}