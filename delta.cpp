/*

Programa em C++ que solicita do usuário 3 numeros reais quaisquer. O programa calcula e imprime o valor de delta.
Se delta < 0 : Imprime "Não existem raizes reais"
Se delta = 0 : Imprime "Existe uma raiz real: " (e imprime x1)
Se delta > 0 : Imprime "Existem duas raizes reais: " (e imprime x1 e x2)

*/

#include<iostream>
#include<cmath>

using namespace std;

int main(){

	float a, b, c, d, x1, x2;

	cout<<"\nDigite o primeiro numero ";
	cin>>a;
	cout<<"\nDigite o segundo numero ";
	cin>>b;
	cout<<"\nDigite o terceiro numero ";
	cin>>c;

	d=pow(b,2)-4*a*c;
	cout<<"\nDelta é igual a: "<<d;

	if(d<0)
		cout<<"\nNão existe raiz real.";
	else
		if(d==0){
			x1=(-(b)+sqrt(d))/(2*a);
			cout<<"\nExiste apenas uma raiz real: "<<x1;
		}
		else{
			x1=(-(b)+sqrt(d))/(2*a);
			x2=(-(b)-sqrt(d))/(2*a);
			cout<<"\nExistem duas raizes reais: "<<x1<<" e " <<x2;
		}

	cout<<"\n\n";
	return 0;


}
