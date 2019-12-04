#include <iostream>
#include <stdlib.h>
using namespace std;

int main (){
    int qtd_rep, val_1, val_2, result, i = 1;
    cout << "Informe a quantidade de operações você deseja realizar: " << endl;
    cin >> qtd_rep;
    for(i >= 1; i <= qtd_rep; i++){
        cout << "Informe o valor 1 da operacao [" << i << "]:" << endl;
        cin >> val_1;
        cout << "Informe o valor 2 da operacao [" << i << "]:" << endl;
        cin >> val_2;
        result = (val_1 * val_2);
        cout << "Resultado da operacao [" << i << "]:" << result << endl;
    }
}
