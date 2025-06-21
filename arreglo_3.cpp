#include <iostream>
using namespace std;

int main() {
    string dia[7] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
    string aux;
    float min[7], max[7], media, menor, temp, aux_t;
    
    for(int i = 0; i < 7; i++) {
        cout << "DIA " << dia[i] << ":" << endl;
        cout << "Temperatura minima: ";
        cin >> min[i];
        cout << "Temperatura maxima: ";
        cin >> max[i];
        cout << "\n";
    }

    cout << "Temperatura MEDIA por dia:" << endl;
    for(int i = 0; i < 7; i++) {
        media = (min[i] + max[i]) / 2;
        cout << dia[i] << ": " << media << endl;
    }
    cout << endl;

    menor = min[0];
    for (int i=0; i<7; i++) {
        if (min[i] < menor) {
            menor = min[i];
            aux = dia[i];
        }
    }
    cout << "Dia con MENOR temperatura:" << endl << aux << endl << "\n";

    cout << "ESCRIBA una temperatura maxima: ";
    cin >> temp;
    cout << "Dias que coinciden:" << endl;
    aux_t = 0;
    for(int i = 0; i < 7; i++) {
        if(max[i] == temp) {
            cout << dia[i] << "  ";
            aux_t++;
        }
    }
    if(aux_t == 0) {
        cout << "NINGUNO";
    }
    
    return 0;
}