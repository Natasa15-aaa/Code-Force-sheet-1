#include <iostream>
using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    long long result = A;
    result = (result * B) % 100;
    result = (result * C) % 100;
    result = (result * D) % 100;


    cout << result << endl;

    return 0;
}

