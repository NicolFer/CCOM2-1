#include <iostream>
#include <cctype>
using namespace std;

bool Palindromo(char* p) {
    char* izq = p;
    char* der = p;

    while (*der) {
        der++;
    }
    der--; 

    while (izq < der) {

        while (izq < der && !isalnum(*izq)) {
            izq++;
        }
        while (izq < der && !isalnum(*der)) {
            der--;
        }

        char charizq = (*izq >= 'A' && *izq <= 'Z') ? *izq + ('a' - 'A') : *izq;
        char charder = (*der >= 'A' && *der <= 'Z') ? *der + ('a' - 'A') : *der;

        if (charizq != charder) {
            return false;
        }
        izq++;
        der--;
    }

    return true;
}

int main() {
    char frase[] = "Anas uso tu auto, Susana.";
    char* p = frase;

    if (Palindromo(p)) {
        cout << "ES PALINDROMO" << endl;
    } else {
        cout << "NO ES PALINDROMO" << endl;
    }
}
