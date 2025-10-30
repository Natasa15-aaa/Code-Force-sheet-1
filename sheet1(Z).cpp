#include <iostream>
using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;
    if (B * 1.0 * log(A) > D * 1.0 * log(C)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}

