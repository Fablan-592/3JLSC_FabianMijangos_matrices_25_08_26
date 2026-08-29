// 3JLSC_FabianMijangos_manejo_memoria_19_08_26.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.

#include <iostream>
#include <cstdio>
using namespace std;


const int num_filas = 3;
const int num_columnas = 3;

void imprimir_matriz(int matriz_local_imp[num_filas][num_columnas]){
    printf("Los valores de la matriz: \n");
    for (int i = 0; i < num_filas; i++) {
        for (int j = 0; j < num_columnas; j++) {
            cout << matriz_local_imp[i][j] << " ";
        }
    }   cout << endl;
}

void ingresar_valores_matriz(int matriz_local[num_filas][num_columnas]) {
    for (int i = 0; i < num_filas; i++) {
        for (int j = 0; j < num_columnas; j++) {
            printf("ingresa el valor de la posicion [%d][%d]: \n", i + 1, j + 1);
            cin >> matriz_local[i][j];
        }
    }
}

int main() {
    cout << "Actividad 03 - Arreglo Bidimensional (MxN) \n";
    int arreglo_matriz[num_filas][num_columnas];
    ingresar_valores_matriz(arreglo_matriz);
    imprimir_matriz(arreglo_matriz);

}
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
