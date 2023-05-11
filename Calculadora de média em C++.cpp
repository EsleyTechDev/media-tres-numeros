#include <iostream>
using namespace std;

int main() {
    double valor1, valor2, valor3, media;

    cout << "Digite o primeiro valor: ";
    cin >> valor1;

    cout << "Digite o segundo valor: ";
    cin >> valor2;

    cout << "Digite o terceiro valor: ";
    cin >> valor3;

    media = (valor1 + valor2 + valor3) / 3.0;

    cout << "A media dos valores digitados eh: " << media << endl;

    return 0;
}
