#include <iostream>  // Función para ordenar un arreglo.
using namespace std;

void insertionSort (int arr[], int n, bool ascending){
	for (int i = 1; i < n; i++) {
		int key = arr[i];
		int j = i - 1;
		// si se especifica orden ascendente, se realiza el ordenamiento ascendente.
		
		if (ascending) {
			while (j >= 0 && arr[j] > key)
			{
				arr[j + 1] = arr[j];
				j--;
			} // Si se esoecifica orden descendente, se realiza el ordenamiento descendente.
		} else {
			while (j >= 0 && arr[j] < key)
			{
				arr[j + 1] = arr[j];
				j--;
			}
		}
		arr[j + 1] = key;
	}
}

void printArray(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	int arr[10] = {52, 2, 9, 22, 5, 1, 0, 56, 99, 10}; // Arreglo de valores enteros.
	
	cout << "Arreglo original: "; //  Imprimir el arreglo orginal.
	printArray(arr, 10);
	
	char order; // Solicitar al usuario el ordenamiento deseado. 
	cout << "¿Ordenar en orden ascendente (a) o descendente (d)? ";
	cin >> order;
	
	bool ascending; // Determinar si se desea ordenar en orden ascendente o descendente.
	if (order == 'a' || order == 'A') {
		ascending = true;
	} else {
		ascending = false;
	}
	
	insertionSort(arr, 10, ascending); // Llamar a la función insertionSort para ordenar el arreglo.
	
	cout << "Arreglo ordenado: "; //Imorimir el arreglo ordenado.
	printArray(arr, 10);
	
	return 0;
}
