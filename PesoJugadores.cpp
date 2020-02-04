#include <iostream>
#include "PesoJugadores.h"
using namespace std;

int main() {
    int no_Jugadores = 8;
    float pesos_Libras[8] = { 198.86, 186.45, 195.34, 199.26, 206.46, 209.34, 198.23, 201.11 };
    float pesos_Kilos[8];
    for (int cont = 0; cont < no_Jugadores; cont++)
    {
        pesos_Kilos[cont] = pesos_Libras[cont] / 2.204623;
    }

    for (int cont = 0; cont < no_Jugadores; cont++)
    {
        cout << "El peso del jugador " << cont + 1 << "en kilos es: " << pesos_Kilos[cont] << endl;
    }
    return 0;
}