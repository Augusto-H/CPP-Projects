// Radius of a sphere //

#include <iostream>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;
// Programa para calcular o volume de uma esfera //
// Fórmula : V = (4/3).PI.R^3 //

int main ()
{
   const float PI = 3.14159;
   float volume, raio; // Declarando volume e raio como números inteiros//
   
   cout << "Digite o raio da esfera: " << endl; 
    cin >> raio; 
   volume = 4.0/3.0*PI*pow(raio, 3); // Função pow = potênciação //
    cout << "O volume de uma esfera de raio " << raio << "cm =" <<volume << "\n\n";
   
   system("PAUSE");
   return 0;
   
    }
