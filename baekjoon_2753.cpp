#include <iostream>

using namespace std;

int main() {
    int n1;
    cin >> n1;
    if (n1 % 400 == 0)
        cout << 1;
    else if (n1 % 4 == 0 && n1 % 100 != 0)
        cout << 1;
    else
        cout << 0;
    return 0;
}