#include <iostream>

using namespace std;

void vuelto(double cantidad){
//cantidad para devolver
int billetes [5]={ 200,100,50,20,10};
int monedas[3]={5,2,1};
double centavos[3]={0.5, 0.2,0.1};

//contadores de billetes para vuelto 
int montobilletes[5]={};
int montomonedas[3]={};
int montocentavos[3]={};


for (int i=0;i<5;i++){
    montobilletes[i]=cantidad/billetes[i];
    cantidad-=montobilletes[i]*billetes[i];//verificar 
    cout<<"S/. "<<billetes[i]<<" = "<<montobilletes[i]<<endl;
}

for (int i=0;i<3;i++){
    montomonedas[i]=cantidad/monedas[i];
    cantidad-=montomonedas[i]*monedas[i];
    cout<<"S/. "<<monedas[i]<<" = "<<montomonedas[i]<<endl;
}

for (int i=0;i<3;i++){
    montocentavos[i]=cantidad/centavos[i];
    cantidad-=montocentavos[i]*centavos[i];
    cout<<"S/. "<<centavos[i]<<" = "<<montocentavos[i]<<endl;
}
}

int main(){
    double cantidad;
    cout<<"Ingrese cantidad"<<endl;
    cin>>cantidad;
    if (cantidad<0){
        cout<<"monto invalido"<<endl;
    }
    vuelto(cantidad);
    return 0;
}