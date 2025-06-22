#include <iostream>
using namespace std;

int main(){
    int nf, npg, aux;

    cout << "Cantidad de estudiantes en la clase de fundamentos de programacion:" << endl;
    cin >> nf;
    string fund[nf];
    for (int i=0; i<nf; i++){
        cout << "Ingrese un estudiante: ";
        cin >> fund[i];
    }

    cout << endl << "Cantidad de estudiantes en la clase de programacion grafica:" << endl;
    cin >> npg;
    string graf[npg];
    for (int i=0; i<npg; i++){
        cout << "Ingrese un estudiante: ";
        cin >> graf[i];
    }

    if (nf < npg) {
        aux = nf;
    } else {
        aux = npg;
    }
    string igual[aux];

    if (nf < npg) {
        for (int i=0; i<nf; i++){
            for (int j=0; j<npg; j++){
                if (fund[i] == graf[j]){
                    igual[i] = fund[i];
                }
            }
        }
    } else {
        for (int i=0; i<npg; i++){
            for (int j=0; j<nf; j++){
                if (graf[i] == fund[j]){
                    igual[i] = graf[i];
                }
            }
        }
    }

    cout << endl << "ALUMNOS COMUNES entre las dos asignaturas:" << endl;
    for (int i=0; i<aux; i++){
        if (igual[i] != ""){
            cout << igual[i] << "  ";
        }
    }
    return 0;
}