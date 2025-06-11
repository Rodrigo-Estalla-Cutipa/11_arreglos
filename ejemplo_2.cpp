#include <iostream>
using namespace std;

int main(){
    int n, s, prom;
    s = 0;

    cout << "Ingrese la cantidad de elementos:" << endl;
    cin >> n;
    int A[n];
    
    for (int i=0; i<n; i++){
        cout << "Ingrese el elemento " << i+1 << ": ";
        cin >> A[i];
        s = s + A[i];
    }
    prom = s/n;
    for (int i=0; i<n; i++){
        if (A[i] > prom) {
            cout << "Este elemento es mayor al promedio: " << A[i];
        }
    }

    cout << endl << "Fin del programa";
    return 0;
}