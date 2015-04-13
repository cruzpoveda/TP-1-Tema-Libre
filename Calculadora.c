/* Programa Calculadora, calcula operaciones matematicas del tipo suma, resta, multiplicación
* y división y hace comentarios respecto a estas mismas.
* Juan Cruz Poveda
* 12/04/15
*/

#include <iostream>
using namespace std;

int main() {
	int a, b;
	char c;
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
	cout << a+b;
	}
	if (c == '-'){
	cout << a-b;
	}
	if (c == '*'){
	cout << a*b;
	}
	if (c == '/'){
	cout << a/b;
	}
	if (a == b && c == '+'){
	cout << "\nSus dos terminos eran iguales, hubiera sido mas conveniente usar una multiplicacion por 2 (*2).";
	}
}
