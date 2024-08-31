#include <iostream>
#include <string>
using namespace std;

//n=numero
string unidad(int n){
    const string u[9]={"uno", "dos", "tres", "cuatro", "cinco", "seis", "siete","ocho","nueve"};
    return u[n-1];
}
string decena(int n){
    const string d[9]={"dies", "veinte", "treinta", "cuarenta", "cincuenta","sesenta","setenta","ochenta","noventa"};
    return d[n-1];
}
string centenas(int n){
    const string c[9]={"cien","docientos","trecientos","cuatrocientos", "quinientos", "seicientos", "setecientos", "ochocientos","novecientos"};
    return c[n-1];
}
string especialescomomiex(int n){
    const string e[9]={"once","doce","trece", "catorce", "quince", "dieciseis", "diecisiete", "dieciocho", "diecinueve" };
    return e[n-1];
}
string especiales2(int n){
    const string e2[9]={"veintiuno","veintidos", "veintitres","veinticuatro", "veinticinco","veintiseis","veintisiete","veintiocho","veintinueve"};
    return e2[n-1];    
}
string unidadmil(int n){
    const string um[9]={"mil"};
    return um[n-1];
}
            /*else{
                return centenas(n/100)+" "+numeroatexto(n/10);
            }
        }else{
            if(n%100>=1 && n%100<=2){
                return centenas(n/100)+" "+especialescomomiex(n%10);
            }else if (n%100>=2 && n%100<=3){s
                return centenas(n/100)+" "+especiales2(n%10);
            }
        */

string numeroatexto(int n){
    if (n<1 || n>999999){
        cout<<"invalido"<<endl;
    } 
    if(n<10){
        return unidad(n);
    } else if (n<100){
        if (n>10 && n<20)
        {
            return especialescomomiex(n%10);
        } else if (n>20 && n<30){
            return especiales2(n%10);
        } 
        if(n%10==0){
            return decena(n/10);
        }else if (n%10!=0){
            return decena(n/10)+" y "+unidad(n%10);
        }
    }else if (n<1000){
        if (n%100==0){
                return centenas(n/100);
            }
        else{
                return centenas(n/100)+" "+numeroatexto(n%100);
            } 
    }else{
        if (n%1000==0){
            if(n/1000==1){
                return unidadmil(n/1000);
            }else {
                return numeroatexto(n/1000)+" "+unidadmil(1);
            }
        }else{
            return numeroatexto(n/1000)+" " +unidadmil(1)+" "+numeroatexto(n%1000);
        }
    }
    return 0; 
}
int main(){
    int n;
    cout<<"ingrese numero: ";
    cin>>n;
    cout<<"el numero es: "<< numeroatexto(n);
}