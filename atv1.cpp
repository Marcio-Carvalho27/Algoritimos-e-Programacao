#include <iostream>
using namespace std;

int main()
{
    float lucro, vendas;

    cout << "Qual foi o total estimado para as venads?" << endl;
    cin >> vendas;
    lucro = vendas*0.23;
    cout << "seu lucro foi de " << lucro << endl;
    
    return 0;
}