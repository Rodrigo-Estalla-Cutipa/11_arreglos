#include <iostream>
using namespace std;

int main(){
    int n, cpar, cimpar;
    cpar = 0;
    cimpar = 0;

    cout << "Ingrese la cantidad de elementos:" << endl;
    cin >> n;
    int A[n];

    for (int i=0; i<n; i++){
        cout << "Ingrese el valor nro " << i+1 << ": ";
        cin >> A[i];
        if (A[i] % 2 == 0) {
            cpar = cpar + 1;
        } else {
            cimpar = cimpar + 1;
        }
    }

    int B[cpar], C[cimpar];

    for (int i=0, k=0, j=0; i<n; i++){
        if (A[i] % 2 == 0) {
            B[j] = A[i];
            j++;
        } else {
            C[k] = A[i];
            k++;
        }
    }

    cout << endl << "Lista de elementos PARES:" << endl;
    for (int i=0; i<cpar; i++) {
        cout << B[i] << "  ";
    }
    cout << endl << "\n";

    cout << "Lista de elementos IMPARES:" << endl;
    for (int i=0; i<cimpar; i++) {
        cout << C[i] << "  ";
    }

    return 0;
}