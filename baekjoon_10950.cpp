#include <iostream>

using namespace std;

int main() {
    int n;
    int a, b;

    cin >> n;
    for (; n > 0; n--) {
        cin >> a >> b;
        cout << a + b <<endl;
    }
        
    return 0;
}