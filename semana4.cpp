#include <iostream>
using namespace std;

int main() {
    double a, b;
    char operacion;

    cout << "=== Calculadora Basica ===" << endl;
    cout << "Ingresa la operacion (ej: 5 + 3): ";
    cin >> a >> operacion >> b;

    cout << "Resultado: ";

    switch (operacion) {
        case '+': cout << a + b; break;
        case '-': cout << a - b; break;
        case '*': cout << a * b; break;
        case '/':
            if (b != 0) cout << a / b;
            else cout << "Error: division entre cero";
            break;
        default:
            cout << "Operador invalido";
    }

    cout << endl;
    return 0;
}