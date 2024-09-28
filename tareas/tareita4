#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void split(int*p,int*q){
    int* mid = p+5;
    while((p!=q)&&(p!=mid)){
    int*r=q;
    if ((*p)%2==1){
        swap(*p,*r);
        while(r!=p){
            r--;
            swap(*r,*p);
        }
    }
    p++;
    }
}
main(){
    int A[10];
    int* p=A;
    int* q=p+9;    
    cout << "ingrese 10 números:";
    for(int *p2=p; p2<=q; p2++){
        cin>>*p2;
    }
    split(p,q);
    for(p;p<=q;p++)
      cout<<*p<<", ";
}
