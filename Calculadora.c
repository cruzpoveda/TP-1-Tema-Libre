/* Programa Calculadora, calcula operaciones matematicas del tipo suma, resta, multiplicación
* y división y hace comentarios respecto a estas mismas.
* Juan Cruz Poveda
* 12/04/15
*/

#include <iostream>
using namespace std;
int main() {
	int a, b, x;
	char c;
	bool d=true;
	string res;
	cout << "Ingrese el primer termino:\n";
	cin >> a;
	cout << "Ingrese el operador\n";
	cin >> c;
	cout << "Ingrese el segundo termino:\n";
	cin >> b;
	res = "Resultado ";
	if (c == '+' || c == '-'){
		res = res + "de su operacion basica ";
	}
	cout << res;
	if (c == '+'){
	x = a+b;
	d=false;
	}
	if (c == '-'){
	x = a-b;
	}
	if (c == '*'){
	x = a*b;
	}
	if (c == '/'){
	x = a/b;
	}
	cout << x;
	if (a == b && not d){
	cout << "\nSus dos terminos eran iguales, hubiera sido mas conveniente usar una multiplicacion por 2 (*2).";
	}
	if (x == 0 || x%2!=0){
	cout << "\nEl resultado no es par.";	
	}
}
