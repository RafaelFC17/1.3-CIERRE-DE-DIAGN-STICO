#include <iostream>
using namespace std;

int main() {
    int n = 15;
    int serie [15];//Dependiendo el compilador usado en veces puede salir que se ocupa poner un valor constante en el arreglo por eso no esta puesto n.
    for(int cont = 0; cont < n; cont++)
    {
        if(cont == 0)
        {
            serie[cont] = 1;
        }
        else
        {
            serie[cont] = serie[cont - 1] + 2;
        }
    }
    int temp = 0;
    for (int cont = 0; cont<n; cont++) 
    {
        temp = serie[cont] + temp;
        if(cont != n - 1)
        cout << serie[cont] << " + "; 
        else
        cout << serie[cont] << " = " << temp; 
    }
	return 0;
}