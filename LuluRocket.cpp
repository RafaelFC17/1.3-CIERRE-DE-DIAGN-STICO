#include <iostream>
using namespace std;

int main() {
    int e_vital1_cm = 89;
    int e_vital2_cm = 58;
    int e_vital3_cm = 89;
    double cm_pulg = 0.393701;
    double e_vital1_pulg = e_vital1_cm * cm_pulg;
    double e_vital2_pulg = e_vital2_cm * cm_pulg;
    double e_vital3_pulg = e_vital3_cm * cm_pulg;
    int altura_cm = 170;
    int peso_km = 53;
    cout << "Su estadistica vital en pulgadas tiene las siguientes medidas: " << e_vital1_pulg << "pulg-" << e_vital2_pulg << "pulg-" << e_vital3_pulg << "pulg" << endl;
    cout << "Su altura en pies es: " << altura_cm / 30.48 << endl;
    cout << "Su peso en libras es: " << peso_km / 0.453592;


    return 0;
}