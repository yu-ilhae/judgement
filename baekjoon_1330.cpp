﻿#include <iostream>

using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    if (n1 == n2)
        cout << "==";
    else
        cout << ((n1 > n2) ? ">" : "<");
    return 0;
}