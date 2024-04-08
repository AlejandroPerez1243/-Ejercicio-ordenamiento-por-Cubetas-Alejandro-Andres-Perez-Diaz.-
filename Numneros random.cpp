#include <iostream>

using namespace std;

// Funci�n para generar un n�mero aleatorio en un rango espec�fico
int numeroAleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
}


void imprimirArreglo(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Implementaci�n del algoritmo Bucket Sort
void bucketSort(int arr[], int n) {
    const int rango = 200; 
    int buckets[rango] = {0};


    for (int i = 0; i < n; i++) {
        buckets[arr[i]]++;
    }

    
    int index = 0;
    for (int i = 0; i < rango; i++) {
        while (buckets[i] > 0) {
            arr[index++] = i;
            buckets[i]--;
        }
    }
}

int main() {
    const int cantidad =10; // Cantidad de n�meros aleatorios
    int arr[cantidad];

    srand(time(0)); 


    for (int i = 0; i < cantidad; i++) {
        arr[i] = numeroAleatorio(0, 200);
    }

    cout << "Arreglo original:" << endl;
    imprimirArreglo(arr, cantidad);

    bucketSort(arr, cantidad);

    cout << "Arreglo ordenado:" << endl;
    imprimirArreglo(arr, cantidad);

    return 0;
}
