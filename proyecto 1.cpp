#include <iostream>

using namespace std;

void suma() {

	int real1, real2;

	int Imag1, Imag2;

	cout << "Número 1 " << endl;

	cout << "ingrese parte real: " << endl;

	cin >> real1;

	cout << "ingrese parte imaginaria: " << endl;

	cin >> Imag1;

	cout << "Número 2 " << endl;

	cout << "ingrese parte real: " << endl;

	cin >> real2;

	cout << "ingrese parte imaginaria: " << endl;

	cin >> Imag2;

	int suma_real = real1 + real2;

	int suma_imag = Imag1 + Imag2;

	cout << "suma: " << "(" << suma_real << " + " << suma_imag << "i)" << endl;

}

void resta() {

	int real1, real2;

	int Imag1, Imag2;

	cout << "Número 1 " << endl;

	cout << "ingrese parte real: " << endl;

	cin >> real1;

	cout << "ingrese parte imaginaria: " << endl;

	cin >> Imag1;

	cout << "Número 2 " << endl;

	cout << "ingrese parte real: " << endl;

	cin >> real2;

	cout << "ingrese parte imaginaria: " << endl;

	cin >> Imag2;

	int resta_real = real1 - real2;

	int resta_imag = Imag1 - Imag2;

	if (resta_imag < 0) {

		cout << "resta: " << "(" << resta_real << resta_imag << "i)" << endl;

	}

	else

	{

		cout << "resta: " << "(" << resta_real << " + " << resta_imag << "i)" << endl;

	}

}



void main() {

	char opcion;

	cout << "A. Sumar 2 Números Complejos." << endl;

	cout << "B. Restar 2 Números Complejos." << endl;

	cout << "X. Salir del Programa" << endl;

	cin >> opcion;

	switch (opcion)

	{

	case 'A':

		suma();

		break;

	case 'B':

		resta();

		break;

	default:

		break;

	}

}








