#include <iostream>

using namespace std;

int main() {
    long long a = 1, b = 1, c = 2;
    int x;
    cin >> x;
    
    if (x == 0) {
        cout << 0;
        return 0;
    }
    if (x == 1) {
        cout << 1;
        return 0;
    }
    if (x == 2) {
        cout << 1;
        return 0;
    }
    if (x == 3) {
        cout << 2;
        return 0;
    }
    
    for (int i = 4; i <= x; i++) {
        long long next = b + c;
        a = b;
        b = c;
        c = next;
    }
    
    cout << c;
    return 0;
}

