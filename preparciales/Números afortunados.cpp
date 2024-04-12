#include <iostream>

using namespace std;

void generarSalida (int n);
void eliminarElemento (int elementoEliminar, int arreglo[], int n);

int main()
{
    // Colocar cualquier valor que no sea 0
    int n = 2;
    
    while (n != 0){
        cin >> n;
        generarSalida(n);
    }
    return 0;
}

void generarSalida (int n){
    if (n != 0){
        int arreglo [n];
        int tamInicial = n;
    
        // Primero eliminare de 2 en 2, luego de 3 en 3 pero el minímo es 2 (Se incrementará a lo largo del programa)
        int m = 2;
        
        // Llenar el arreglo
        // i = i + 1
        for (int i = 0; i < n; i++){
            arreglo[i] = i + 1;
        }
        
        while (m < n){
            // Tengo que eliminar elementos cada m
            for (int i = 0; i < n; i = i + m - 1){
                // Siempre eliminare el elemento en i, solo desplazare i en las casillas que quiero eliminar
                eliminarElemento(arreglo[i], arreglo, n);
                n--;
            }
            m++;
        }
        
        
        // Ordenar la salida en orden de mayor a menor.
        for (int i = 0; i < n; i++){
            for (int j = i; j < n; j++){
                if (arreglo[j] > arreglo[i]){
                    int aux = arreglo[i];
                    arreglo[i] = arreglo[j];
                    arreglo[j] = aux;
                }
            }
        }
        
        // Imprimir el arreglo ya ordenado.
        cout << tamInicial << ": ";
        for (int i = 0; i < n; i++){
            cout << arreglo[i] << " ";
        }
        cout << endl;
    }
}

void eliminarElemento (int elementoEliminar, int arreglo[], int n){
    for (int i = 0; i < n; i++){
        if (elementoEliminar == arreglo[i]){
            // Identificar la posicion en donde se coincide
            int pos = i;
            
            // Desde la pos hacer el desplazamiento
            for (int j = pos; j < n-1; j++){
                arreglo[j] = arreglo[j+1];
            }
        }
    }
    
}
