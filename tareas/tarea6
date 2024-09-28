#include <iostream>
#include <string>
using namespace std;

void upper(char*p){
    for (;*p;p++){
        if ((*p>=97)&&(*p<=122))
            *p-=32;
    }
}
bool palindromo(char *b, char* c){
    for(; *b; b++){
        if (b!=c){
            if ((*b==32)||(*c==32){
            }

            c--;
        }
    }
}

main(){
    string a;
    cout<<"Escribe algo: ";
    getline(cin, a); 
    char* p = const_cast<char*>(a.c_str()); 
    upper(p);
    char*inicio= const_cast<char*>(a.c_str());
    char*fin= inicio + sizeof(a) -1;
    //while (*endPtr != '\0') {
    //    endPtr++;
    palindromo(inicio,fin);
}
