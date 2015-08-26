#include <iostream>
using namespace std;

const unsigned MAX = 50;
typedef double TArray[MAX];
struct TEstaturas{
    TArray alturas;
    unsigned tam;
};
double media(const TEstaturas& estatur);
unsigned masAltos(const TEstaturas& estatur, double media);
unsigned masBajos(const TEstaturas& estatur, double media);

int main(){
    TEstaturas estatur;
    estatur.tam = 0;
    for(int i=0; i<MAX; i++){
        if(i%2 == 0){
            estatur.alturas[i] = 1.00 +0.50;
        }
        else{
            estatur.alturas[i] = 1.1 + 0.7;
        }
        estatur.tam++;
    }
    cout<<"la altura media de la clase es: " <<media(estatur) <<endl;
    cout<<"El número de alumnos más altos de la media es: "<<masAltos(estatur, media(estatur)) <<endl;
    cout<<"El número de alumnos más bajos que la media es: "<<masBajos(estatur, media(estatur)) <<endl;
    return 0;
}

double media(const TEstaturas& estatur){
    double media = 0.0;
    for(int i=0; i<estatur.tam; i++){
        media = media + estatur.alturas[i];
    }
    media = media/estatur.tam;
    return media;
}

unsigned masAltos(const TEstaturas& estatur, double media){
    unsigned altos = 0;
    for(int i=0; i<estatur.tam; i++){
        if(estatur.alturas[i] > media){
            altos++;
        }
    }
    return altos;
}

unsigned masBajos(const TEstaturas& estatur, double media){
    unsigned bajos = 0;
    for(int i=0; i<estatur.tam; i++){
        if(estatur.alturas[i] < media){
            bajos++;
        }
    }
    return bajos;
}

