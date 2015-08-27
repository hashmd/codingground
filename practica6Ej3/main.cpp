#include <iostream>
using namespace std;

typedef unsigned TVector[10];

void inicializarVector(TVector& frecuencias);
void leerDatos(TVector& frecuencias);
void mostrarDatos(const TVector& frecuencias);


int main(){
    TVector frecuencias;
    inicializarVector (frecuencias);
    leerDatos(frecuencias);
    mostrarDatos(frecuencias);
    return 0;
}

void inicializarVector(TVector& frecuencias){
    for(unsigned i=0; i<10; i++){
        frecuencias[i] = 0;
    }
}

void leerDatos(TVector& frecuencias){
    unsigned num;
    cout<<"introduzca números entre 0 y 9 y un número negativo para finalizar."<<endl;
    do{
        while(num > 0){
           cin>>num;
           frecuencias[num]++;
           cin>>num;
        }
    }while(num < 10);
}

void mostrarDatos(const TVector& frecuencias){
    for(unsigned i=0; i < 10; i++){
        cout<<i <<" : " <<frecuencias[i] <<" ";
    }
}