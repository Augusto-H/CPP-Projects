#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main () {
	double n1, n2, n3, n4, n5, media, recalaverage;
	cin >> n1 >> n2 >> n3 >> n4;
	
	media = ((n1 * 2)+(n2 * 3)+( n3 * 4)+(n4 * 1))/10;
	
	if (media >= 7.0)
	{
      cout << "Media: " << media << setprecision(1) << endl;
      cout << "Aluno Aprovado" << endl;
	}
	else if (media >= 5.0 && media <= 6.9){
		cout << "Media: " << media << setprecision(1) << endl;
		cout << "Aluno em exame." << endl;
		cin >> n5;
		cout << "Nota do exame: " << n5 << setprecision(1) << endl;
		recalaverage = ((media + n5)/2);
	}
		if (recalaverage >= 5.0) {
			cout << "Aluno aprovado." << endl;
		}else{
			cout << "Aluno reprovado." << endl;
	}
	cout << "Media final: " << recalaverage << setprecision(1) << endl;
}
