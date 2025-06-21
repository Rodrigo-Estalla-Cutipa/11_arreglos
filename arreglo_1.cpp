#include <iostream>
using namespace std;

int main(){
    int n, s;
    float porcentaje, c;
    s=0;
    c=0;

    cout << "Ingrese la cantidad de valores enteros que va ingresar:" << endl;
    cin >> n;
    int A[n];
    
    for (int i=0; i<n; i++){
        cout << "Ingrese el valor nro " << i+1 << ": ";
        cin >> A[i];
        s = s + A[i];
        if (A[i] == 0){
            c = c + 1;
        }
    }
    porcentaje = (c/n)*100;

    cout << "La sumatoria de elementos es: " << s << endl;
    cout << "El porcentaje de ceros es: " << porcentaje << "%";
    return 0;
}