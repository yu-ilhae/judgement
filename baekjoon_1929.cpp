#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
	int start, end;
	int* num;
	int k = 0;
	
	cin >> start >> end;
	num = new int[end-start + 1];
	
	for (int i = 0; i < end - start + 1; i++)
		num[i] = start+i;

	if (num[0] == 1) num[0] = 0;

	for (int i = 2; i <= sqrt(end); i++) {
		for (int j = 0; j < end - start + 1; j++){
			if (num[j] == 0) continue;
			else if (num[j] % i == 0 && num[j] > i) num[j] = 0;
		}
	}

	for (int i = 0; i < end - start + 1; i++)
		if (num[i] != 0) cout << num[i] << "\n";

	

	return 0;
}