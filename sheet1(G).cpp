#include <iostream>
using namespace std;

int main() {
    long long N, sum = 0;
    cin >> N;

    for (long long i = 1; i <= N; ++i) {
        sum += i;
    }

    cout << sum << endl;
    return 0;
}
