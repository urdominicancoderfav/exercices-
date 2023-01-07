#include "1.hpp"
#include <iostream>
using namespace std;

int Rectangulo::get_largo(int l) {
    largo = l; 
    
}

int Rectangulo::get_ancho(int a) {
    ancho = a;
}

int Rectangulo::perimetro() {
    return 2 * (largo + ancho);

}

int Rectangulo::area() {
    return largo * ancho;
}