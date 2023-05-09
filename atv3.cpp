#include <iostream>
using namespace std;

int main()
{
    int nfatias, pizzas, npessoas, sobra;

    cout << " Quantas pessoas estarao presentes? " << endl;
    cin >> npessoas;
    cout << " Quantas pizzas serao pedidas> " << endl;
    cin >> pizzas;
    cout << " e quantas fatias tem a pizza? " << endl;
    cin >> nfatias;

    sobra = (nfatias * pizzas) - (npessoas*3);

    cout << " Considerando que cada pessoas come 3 fatias havera uma sobra de " << sobra << " fatias" << endl;
    return 0;
}