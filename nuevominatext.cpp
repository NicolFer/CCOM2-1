#include <iostream>
#include <string>
using namespace std;

//n=numero
string unidad(int n) {
    const string u[9] = { "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete","ocho","nueve" };
    return u[n - 1];
}
string decena(int n) {
    const string d[9] = { "diez", "veinte", "treinta", "cuarenta", "cincuenta","sesenta","setenta","ochenta","noventa" };
    return d[n - 1];
}
string centenas(int n) {
    const string c[9] = { "cien","doscientos","trescientos","cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos","novecientos" };
    return c[n - 1];
}
string centenaespecial(int n) {
    const string c[1] = { "ciento" };
    return c[0];
}
string especialescomomiex(int n) {
    const string e[9] = { "once","doce","trece", "catorce", "quince", "dieciseis", "diecisiete", "dieciocho", "diecinueve" };
    return e[n - 1];
}
string especiales2(int n) {
    const string e2[2] = { "veinti","veintiun" };
    return e2[n];
}
string unidadmil(int n) {
    const string um[1] = { "mil" };
    return um[0];
}

string numeroatexto(int n) {
    if (n < 10) {
        return unidad(n);
    }
    else if (n < 100) {
        if (n > 10 && n < 20)
        {
            return especialescomomiex(n % 10);
        }
        else if (n > 20 && n < 30) {
            if (n == 21 && n % 1000 != 21) {
                return especiales2(1);
            }
            else if (n == 21 && n % 1000 == 21) {
                return especiales2(0)+unidad(n%10);
            }
            else {
                return especiales2(0)+unidad(n%10);
            }
        }
        if (n % 10 == 0) {
            return decena(n / 10);
        }
        else if (n % 10 != 0) {
            return decena(n / 10) + " y " + unidad(n % 10);
        }
    }
    else if (n < 1000) {
        if (n % 100 == 0) {
            return centenas(n / 100);
        }else if (n>100 && n<200) {
            return centenaespecial(n / 100) + " " + numeroatexto(n % 100);
        }
        else {
            return centenas(n / 100) + " " + numeroatexto(n % 100);
        }
    }
    else {
        if (n % 1000 == 0) {
            if (n / 1000 == 1) {
                return unidadmil(n / 1000);
            }
            else {
                if()
                return numeroatexto(n / 1000) + " " + unidadmil(1);
            }
        }
        else {
            return numeroatexto(n / 1000) + " " + unidadmil(1) + " " + numeroatexto(n % 1000);
        }
    }
    return "";
}
int main() {
    int n;
    while (true){
    cout << "ingrese numero: ";
    cin >> n;
    if (n < 1 || n>999999) {
        try {
            throw n;
        }
        catch (int ex)
        {
            std::cout << "El numero:  " << ex << " es invalido." << std::endl;
        }
    }
    else {
        cout << "el numero es: " << numeroatexto(n)<<endl;
    }
    }
}
