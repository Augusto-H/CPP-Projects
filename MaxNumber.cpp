#include <iostream>
using std::cout;
using std::cin;
//  Programa para calcular duas variáveis e mostrar o maior valor //
int main ()
{
	unsigned long valor_1, valor_2;
	
	cout << "Digite o valor 1 e tecle Enter: ";
	cin >> valor_1;
	cout << "Digite o valor 2 e tecle Enter: ";
	cin >> valor_2;
	
	if (valor_1 >= valor_2)
	 cout << valor_1 << " >= " << valor_2;
	else 
	 cout << valor_1 << " < " << valor_2;	
	 
	system("PAUSE");
	return 0;
 }
