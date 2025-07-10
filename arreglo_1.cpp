#include <iostream>
using namespace std;

int main(){
    int n, s;
    float porcentaje, c;
    s=0;
    c=0;
    //Añadimos validacion ; restringimos valores menores e iguales a 0.
    do{
    cout << "Ingrese la cantidad de valores enteros que va ingresar:" << endl;
    cin >> n;
    if(n<=0){
    cout<<"Acaba de ingresar una cantidad invalida, vuelva a intentarlo"<<endl;
    system("pause");
    }
    }while(n<=0);
    int A[n];
    
    for (int i=0; i<n; i++){
        cout << "Ingrese el valor numero " << i+1 << ": ";//complete la palabra "numero"
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