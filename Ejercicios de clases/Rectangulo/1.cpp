#include <iostream>
#include "1.hpp"
using namespace std;

int main () {
    //Construya una clase llamada rectangulo con los atributos ancho y largo y los metodos perimetro y area.

    Rectangulo rectangulo; 
    rectangulo.get_ancho(50);
    rectangulo.get_largo(100);
    cout << rectangulo.area() << endl;
    cout << rectangulo.perimetro() << endl;
 
    
}

    
