#include <iostream>
using namespace std;

int main() {
	int dia = 86400;
	int semana = 7;
	int mes = 30;
	cout << "Segundos en una semana: " << semana * dia << endl;
	cout << "Segundos en tres semanas: " << semana * 3 * dia << endl;
	cout << "Segundos en un mes: " << mes * dia << endl;
	cout << "Segundos en un mes y tres dias: " << (mes * dia) + (dia * 3) << endl;
	return 0;
}