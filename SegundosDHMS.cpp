#include <iostream>
using namespace std;

int main() {
    int minuto = 60;
    int hora = 60;
    int dia = 24;
    int dias;
    int horas;
    int minutos;
    int segundos;
    cout << "Ingrese dias: ";
    cin >> dias;
    cout << endl;
    cout << "Ingrese horas: ";
    cin >> horas;
    cout << endl;
    cout << "Ingrese minutos: ";
    cin >> minutos;
    cout << endl;
    cout << "Ingrese segundos: ";
    cin >> segundos;
    cout << endl;
    cout << "En" << dias<< "dias, "<< horas << "horas, " << minutos << "minutos y " << segundos << "segundos hay " << (dias * dia * hora * minuto) + (horas * hora * minuto) + (minutos * minuto) + segundos << " segundos";
    return 0;
}