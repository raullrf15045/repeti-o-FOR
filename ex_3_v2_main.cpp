#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    int soma = 0;

    cout << "Introduza o primeiro numero: ";
    cin >> n1;

    cout << "Introduza o segundo numero: ";
    cin >> n2;

    while (n1 >= n2)
    {
        cout << "O primeiro numero tem de ser menor que o segundo." << endl;

        cout << "Introduza o primeiro numero: ";
        cin >> n1;

        cout << "Introduza o segundo numero: ";
        cin >> n2;
    }

    for (int i = n1; i <= n2; i++)
    {
        soma = soma + i;
    }

    cout << "O somatorio dos numeros e: " << soma << endl;

    return 0;
}
