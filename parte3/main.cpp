#include <iostream>
using namespace std;

class Ponto {
public:
    float x, y;

    Ponto(float x, float y) {
        this->x = x;
        this->y = y;
    }

    // soma dois pontos
    Ponto operator+(Ponto p) {
        return Ponto(x + p.x, y + p.y);
    }

    // mostrar ponto
    friend ostream& operator<<(ostream& saida, Ponto p) {
        saida << "(" << p.x << ", " << p.y << ")";
        return saida;
    }
};

int main() {
    Ponto p1(2, 3);
    Ponto p2(4, 5);

    Ponto p3 = p1 + p2;

    cout << p3 << endl;

    return 0;
}