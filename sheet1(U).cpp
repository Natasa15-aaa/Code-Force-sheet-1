#include <iostream>
using namespace std;

int main(){
    double N;
    cin >> N;
    int ip = (int)N;
    if (N == ip) {
        cout << "int " << ip << endl;
    } else {
        cout << "float " << ip << " " << (N - ip) << endl;
    }
    return 0;
}

