#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void merge(int*p,int*q){

int* finalbucl = q + (q - p);
for(p; q!=finalbucl; p++){    
    if (*q<*p){
        int*r=p;
        while (*q<*r){
            swap(*r,*q);
            r++;
        }
        
    }else{
        q++;
    }
}

}
main(){
    int A[10]={2, 4, 6, 8, 10, 1, 3, 5, 7, 9};
    int* p=A;
    int* q=p+5;    
         
    cout << "ingrese 10 numeros(5 pares 5 impares):";
    for(int *p2=p; p2<q+5; p2++){
        cin>>*p2;
    }
    merge(p,q);
    for(p;p<q+5;p++)
      cout<<*p<<", ";
}
