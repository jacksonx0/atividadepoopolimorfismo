#include <iostream>
using namespace std;

int somar(int a, int b) {
    return a + b;
}

int somar(int a, int b, int c) {
    return a + b + c;
}

float somar(float a, float b) {
    return a + b;
}

int main() {
    cout << somar(2, 3) << endl;
    cout << somar(1, 2, 3) << endl;
    cout << somar(2.5f, 3.5f) << endl;

    return 0;
}