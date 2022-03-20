//
// Created by Paul on 19/3/2022.
//

#include "Papa.h"

Papa::Papa(string nombre) : nombre(nombre) {}

string Papa::getNombre() {
    return nombre;
}

void Papa::setNombre(string nombre) {
    Papa::nombre = nombre;
}
