/* Hell Yeah!

SIMPLE IF AND ELSE C++ USE */



#include <iostream>
#include <stdlib.h>
using namespace std;

int main ()
{
    int valor_1, valor_2;
    
    cout <<"Olá! Informe o valor 1: " << endl;
    cin >> valor_1;
    cout <<"Agora o valor 2: " << endl;
    cin >> valor_2;
    if (valor_1 > valor_2)
    {
        cout <<"Valor 1 é maior que o Valor 2!" << endl;
    }
    else
    {
        cout <<"Valor 1 é menor que o Valor 2!" << endl; 
    }
    system("PAUSE");
	return 0;
}
