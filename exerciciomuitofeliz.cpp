#include <iostream>
#include <cmath>
#include <locale.h>
#include <string>

using namespace std;
int main ()
{
	//Variav�is
	float d, h, ab, v, r, al;

	//Entrada do usu�rio
	cout << "Digite a altura:";
	cin >> h;
	cout << "Digite o diametro:";
	cin >> d;

	//Contas
	r = d / 2;
	ab = 3.14 * pow(r, 2);
	v = ab * h;
	al = 2 * 3.14 * r * h;

	//Sa�da da conta
	cout << "O resultado do volume e:" << v << endl;
	cout << "O resultado da area lateral e:" << al << endl;

	return 0;


}

