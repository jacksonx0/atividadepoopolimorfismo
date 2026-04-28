#include <iostream>
using namespace std;

template <typename Tipo>
Tipo maiorValor(Tipo a, Tipo b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    cout << maiorValor(10, 5) << endl;
    cout << maiorValor(2.5f, 7.1f) << endl;

    return 0;
}