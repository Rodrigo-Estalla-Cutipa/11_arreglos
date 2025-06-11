#include <iostream>
using namespace std;

int main(){
    int n, aux;

    cout << "Ingrese la cantidad de elementos:" << endl;
    cin >> n;
    int A[n];

    for (int i=0; i<n; i++) {
        cout << "Ingrese el elemento " << i+1 << ": ";
        cin >> A[i];
    }

    for (int i=0; i < (n/2); i++) {
        aux = A[i];
        A[i] = A[n-i-1];
        A[n-i-1] = aux;
    }

    cout << "Elementos Intercambiados" << endl;

    for (int i=0; i<n; i++) {
        cout << "Elemento " << i+1 << ": " << A[i] << endl;
    }

    return 0;
}