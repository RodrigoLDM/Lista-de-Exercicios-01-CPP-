//Rodrigo Limongi De Martini - 32021852

#include <iostream>

using namespace std;

int Max(int valor1, int valor2)
{
    if (valor1 > valor2)
        return valor1;
    else
        return valor2;
}

int main()
{
    setlocale(LC_ALL, "pt_BR");

    int valor1, valor2;

    cout << "Digite o primeiro número: ";
    cin >> valor1;

    cout << "Digite o segundo número: ";
    cin >> valor2;

    cout << "O maior valor é o " << Max(valor1, valor2);
}