#include <iostream>
using namespace std;

int main()
{
    float valor, iest, ifed, final;

    cout << "Qual foi o valor da venda?" << endl;
    cin >> valor;

    iest = 0.02 * valor;
    ifed = 0.04 * valor;
    final = valor - iest - ifed;

    cout << " o valor da venda foi RS " << valor << endl;
    cout << " O Inposto Estadual foi de RS " << iest << endl;
    cout << " O imposto federal foi de RS " << ifed << endl;
    cout << " O preço final no produto e de RS " << final << endl;


    return 0;
}