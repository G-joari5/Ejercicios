#include <iostream>
#include <algorithm>
#include <chrono>

using namespace std;

int busquedaBinaria(int array[], int valor, int n) {
    int bajo = 0;
    int alto = n - 1;
    while (bajo <= alto) {
        int medio = bajo + (alto - bajo) / 2;
        if (array[medio] == valor) {
            return medio;
        } else if (array[medio] < valor) {
            bajo = medio + 1;
        } else {
            alto = medio - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);
    int valor = 23;
    int resultado = busquedaBinaria(arr, valor, n);
    if (resultado != -1) {
        cout << "El valor " << valor << " se encuentra en la posición " << resultado << endl;
    } else {
        cout << "El valor " << valor << " no se encuentra en el arreglo" << endl;
    }
    return 0;
}
