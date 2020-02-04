#include <iostream>
using namespace std;

int main() {
    int distancia_Millas = 34900000;
    float distancia_Km = distancia_Millas / 1.60934;
    cout << "La distancia en km del Mariner 9 para ir de la Tierra a Marte fue de: " << distancia_Km << endl;
    int dias = 167;
    int horas = 167 * 24;
    float velocidad = distancia_Km / horas;
    cout << "La velocidad promedio en km/h fue de: " << velocidad << "km/h";
    return 0;
}
