#include <iostream>
using namespace std;

int main() {
	int up, down, total;
	int day = 1;

	cin >> up >> down >> total;
	total -= up;
	day += total / (up - down);
	if (total % (up - down) != 0) day++;
	cout << day;
}