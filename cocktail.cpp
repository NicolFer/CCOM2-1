#include <iostream>
#include <vector>

using namespace std;

void cocktailSort(vector<int>& arr) {
    bool swapped = true;
    int start = 0;
    int end = arr.size() - 1;

    while (swapped) {
        swapped = false;

        // Pasada de izquierda a derecha (similar a Bubble Sort)
        for (int i = start; i < end; ++i) {
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }

        // Si no hubo intercambios, la lista está ordenada
        if (!swapped)
            break;

        swapped = false;

        // Disminuir el final ya que el último elemento está en su lugar correcto
        --end;

        // Pasada de derecha a izquierda
        for (int i = end - 1; i >= start; --i) {
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }

        // Aumentar el inicio ya que el primer elemento está en su lugar correcto
        ++start;
    }
}

int main() {
    vector<int> arr = {5, 1, 4, 2, 8, 0, 2};
    
    cocktailSort(arr);
    
    cout << "Array ordenado: ";
    for (int num : arr) {
        cout << num << " ";
    }
    
    return 0;
}
