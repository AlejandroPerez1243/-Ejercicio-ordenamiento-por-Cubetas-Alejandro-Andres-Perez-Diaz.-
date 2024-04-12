#include <iostream>
using namespace std;

int pan(int N, int trosos[]) {
    cout << "Ingrese la cantidad de panes: ";
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> trosos[i];
    }

    for (int i = 0; i < N - 1; i++) {
        if (trosos[i] > trosos[i + 1]) {
            int j = i;
            int suma = trosos[j]; // Comenzar la suma desde el número mayor encontrado
            while (j + 1 < N && suma != trosos[i]) {
                j++;
                suma += trosos[j]; // Sumar hacia la derecha
            }
            if (suma == trosos[i]) {
                return suma; 
            }
        }
    }

    return 0;
}

int main() {
    int N;
    int trosos[10] = {0};
    int suma = pan(N, trosos);
    cout << "Suma: " << suma << endl;
    return 0;
}
