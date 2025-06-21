#include <iostream>
using namespace std;

int multiplo (int, int);

int main(){
    int n, num;
    cout << "Ingrese la cantidad de elementos:" << endl;
    cin >> n;
    int A[n];

    cout << "Ingrese un numero:" << endl;
    cin >> num;
    
    for (int i= 0; i<n; i++) {
        A[i] = multiplo(num, i);
    }

    cout << "Los elementos del arreglo son:" << endl;
    for (int i= 0; i<n; i++) {
        cout << A[i] << "  ";
    }

    return 0;
}

int multiplo (int num, int i){
    int aux;
    aux = num * (i+1);
    return aux;
}