#include <iostream>
using namespace std;

int main() {
    int n;
    int a, b;
    cin.tie(NULL);
    cin >> n;
    for (; n > 0; n--) {
        cin >> a >> b;
        cout << a + b <<"\n";
    }
        
    return 0;
}