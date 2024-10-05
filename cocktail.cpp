#include <iostream>
using namespace std;

void cocktail(int* p, int* q) {
    bool cambio = true;

    while (p < q && cambio) {
        cambio = false;

        for (int* ac = p; ac < q; ac++) {
            if (*ac > *(ac + 1)) {
                swap(*ac,*(ac+1));
                cambio = true;
            }
        }
        --q; 

        if (!cambio) break;

        cambio = false;

        for (int* ac = q; ac > p; --ac) {
            if (*ac < *(ac - 1)) {
                swap(*ac,*(ac-1));
                cambio = true;
            }
        }
        ++p; 
    }
}

int main() {
    int A[] = {19,1,0,22,45,72,88,11};
    int* p = A; 
    int* q = A + (sizeof(A) / sizeof(A[0])) - 1; 
    for (int* ptr = p; ptr <= q; ++ptr) {
        cout << *ptr << " ";
    }
    cout << endl;
    cocktail(p, q);
    for (int* ptr = A; ptr <= q; ++ptr) {
        cout << *ptr << " ";
    }
    cout << endl;
}
